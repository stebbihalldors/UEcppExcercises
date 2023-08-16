// Copyright Epic Games, Inc. All Rights Reserved.


#include "UEcppExercisesGameModeBase.h"

void AUEcppExercisesGameModeBase::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	StatueManager = GetWorld()->SpawnActor<AStatueManager>();
	StatueManager->Initialize(StatueClass);
}

void AUEcppExercisesGameModeBase::SpawnStatue(const FVector Location)
{
	StatueManager->SpawnStatue(Location);
}

