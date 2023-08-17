// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UEcppExercisesGameModeBase.h"
#include "StatueSpawnPoint.generated.h"

UCLASS()
class UECPPEXERCISES_API AStatueSpawnPoint : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY()
	AStatueManager* StatueManager;

protected:
	virtual void BeginPlay() override;

public:
	AStatueSpawnPoint();

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Spawning")
	int32 SpawnCount;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Spawning")
	float SpawnRadius;
};
