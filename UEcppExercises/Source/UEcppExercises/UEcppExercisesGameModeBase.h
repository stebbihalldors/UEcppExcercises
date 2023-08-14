// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UEcppExercisesGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class UECPPEXERCISES_API AUEcppExercisesGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

private:
	//TArray
public:
	UFUNCTION()
	void SpawnStatue(const FVector Location);
};
