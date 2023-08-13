// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotatorComponent.h"
#include "RotationActor.generated.h"

UCLASS()
class UECPPEXERCISES_API ARotationActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARotationActor();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		URotatorComponent* RotatorComponent;
};
