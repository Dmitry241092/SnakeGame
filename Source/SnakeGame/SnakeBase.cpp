// Fill out your copyright notice in the Description page of Project Settings.


#include "SnakeBase.h"
#include "SnakeElementBase.h"
#include "Interactable.h"


// Sets default values
ASnakeBase::ASnakeBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick	= true;
	ElementSize						= 100.f;
	LastMoveDirection				= EMovementDirection::UP;
	TickInterval					= 0.5f;
	CanTurn							= true;
	ElementsStart					= 2;

}

// Called when the game starts or when spawned
void ASnakeBase::BeginPlay()
{
	Super::BeginPlay();
	SetActorTickInterval(TickInterval);

	MakeFirstSnake();
}

// Called every frame
void ASnakeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	Move();
}

void ASnakeBase::AddSnakeElement()
{
	FVector NewLocation = SnakeElements[SnakeElements.Num() - 1]->GetActorLocation();
	FTransform NewTransform(NewLocation);
	ASnakeElementBase* NewSnakeElem = GetWorld()->SpawnActor<ASnakeElementBase>(SnakeElementClass, NewTransform);
	if (NewSnakeElem)
	{
		NewSnakeElem->SnakeOwner = this;
		int32 ElemIndex = SnakeElements.Add(NewSnakeElem);
		NewSnakeElem->MeshComponent->SetVisibility(false);
		if (ElemIndex == 0)
		{
			NewSnakeElem->SetFirstElemType();
		}
	}
}

void ASnakeBase::MakeFirstSnake()
{
	for (int i = 0; i < ElementsStart; ++i)
	{
		FVector NewLocation(SnakeElements.Num() * -ElementSize, 0, 0);
		FTransform NewTransform(NewLocation);
		ASnakeElementBase* NewSnakeElem = GetWorld()->SpawnActor<ASnakeElementBase>(SnakeElementClass, NewTransform);
		if (NewSnakeElem)
		{
			NewSnakeElem->SnakeOwner = this;
			int32 ElemIndex = SnakeElements.Add(NewSnakeElem);
			NewSnakeElem->MeshComponent->SetVisibility(false);
			if (ElemIndex == 0)
			{
				NewSnakeElem->SetFirstElemType();
			}
		}
	}
}


void ASnakeBase::Move()
{
	FVector MovementVector(FVector::ZeroVector);
	
	switch (LastMoveDirection) {
	case EMovementDirection::UP:
		MovementVector.X += ElementSize;
		break;
	case EMovementDirection::DOWN:
		MovementVector.X -= ElementSize;
		break;
	case EMovementDirection::RIGHT:
		MovementVector.Y += ElementSize;
		break;
	case EMovementDirection::LEFT:
		MovementVector.Y -= ElementSize;
		break;
	}

	for (int i = SnakeElements.Num() - 1; i > 0; --i)
	{
		SnakeElements[i]->MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		auto CurElement		= SnakeElements[i];
		auto PrevElement	= SnakeElements[i - 1];
		FVector NewLocation = PrevElement->GetActorLocation();

		CurElement->SetActorLocation(NewLocation);

		if (!CurElement->MeshComponent->GetVisibleFlag())
		{
			CurElement->MeshComponent->SetVisibility(true);
			PrevElement->MeshComponent->SetVisibility(true);
		}
	}
	// don't forget to move the head
	SnakeElements[0]->AddActorWorldOffset(MovementVector);
	CanTurn = true;
	SnakeElements[0]->MeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
}

void ASnakeBase::SnakeElementOverlap(ASnakeElementBase* OverlappedBlock, AActor* Other)
{
	if (IsValid(OverlappedBlock))
	{
		int32 ElemIndex = 0;
		if (SnakeElements.Find(OverlappedBlock, ElemIndex))
		{
			bool bIsFirst = ElemIndex == 0;
			IInteractable* InteractableInterface = Cast<IInteractable>(Other);

			// can't use IsValid cuz interface is not an actor so just check if pointer is not null
			if (InteractableInterface && bIsFirst)
			{
				InteractableInterface->Interact(this, bIsFirst);
			}
		}
	}
}

// Multiplies movement speed by Num
void ASnakeBase::IncreaseSnakeSpeed(float Num)
{
	SetActorTickInterval(TickInterval *= Num);
}

void ASnakeBase::ResetSnakeSpeed()
{
	SetActorTickInterval(TickInterval);
}
