// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StatueActor.generated.h"

UCLASS()
class UECPPEXERCISES_API AStatueActor : public AActor
{
	GENERATED_BODY()
	
protected:
	//UPROPERTY(BlueprintReadWrite, EditAnywhere)
	//URandomMoveComponent* RandomMoveComponent;

	virtual void BeginPlay() override;

public:
	AStatueActor();

	//UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	//void Pickup(); virtual void Pickup_Implementation() override;
};
