// Fill out your copyright notice in the Description page of Project Settings.


#include "SpeedUpBonus.h"
#include "SnakeBase.h"

// Sets default values
ASpeedUpBonus::ASpeedUpBonus()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpeedUpBonus::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpeedUpBonus::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpeedUpBonus::Interact(AActor* Interactor, bool bIsHead)
{
	if (bIsHead)
	{
		auto Snake = Cast<ASnakeBase>(Interactor);
		if (IsValid(Snake))
		{
			Snake->IncreaseSnakeSpeed(SpeedChangeValue);
			this->Destroy();
		}
	}
}
