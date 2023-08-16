// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Statue/StatueManager.h"
#include "Statue/StatueActor.h"
#include "UEcppExercisesGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class UECPPEXERCISES_API AUEcppExercisesGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

private:
	UPROPERTY()
		AStatueManager* StatueManager;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TSoftClassPtr<AStatueActor> StatueClass;

	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
	UFUNCTION()
	void SpawnStatue(const FVector Location);
};
