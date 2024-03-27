// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SnakeBase.generated.h"


class ASnakeElementBase;


UENUM()
enum class EMovementDirection
{
	UP,
	DOWN,
	LEFT,
	RIGHT
};


UCLASS()
class SNAKEGAME_API ASnakeBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASnakeBase();

	UPROPERTY(EditDefaultsOnly)
	float ElementSize;

	UPROPERTY(EditDefaultsOnly)
	int ElementsStart = 1;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ASnakeElementBase> SnakeElementClass;

	UPROPERTY()
	TArray<ASnakeElementBase*> SnakeElements;

	UPROPERTY()
	EMovementDirection LastMoveDirection;

	// Seconds between ticks
	UPROPERTY(EditDefaultsOnly)
	float TickInterval = 0.f;

	UPROPERTY()
	bool CanTurn = true;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void AddSnakeElement();
	UFUNCTION(BlueprintCallable)
	void Move();
	UFUNCTION()
	void SnakeElementOverlap(ASnakeElementBase* OverlappedBlock, AActor* Other);

	UFUNCTION(BlueprintCallable)
	// Multiplies movement speed by Num
	void IncreaseSnakeSpeed(float Num);

	UFUNCTION(BlueprintCallable)
	void ResetSnakeSpeed();

	void MakeFirstSnake();
};
