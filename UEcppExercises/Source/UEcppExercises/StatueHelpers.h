// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StatueHelpers.generated.h"

/**
 * 
 */
UCLASS()
class UECPPEXERCISES_API UStatueHelpers : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Helpers")
	static FVector RandomLocation(const FVector Origin, const float Radius);
};
