// Fill out your copyright notice in the Description page of Project Settings.


#include "RotationActor.h"

// Sets default values
ARotationActor::ARotationActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RotatorComponent = CreateDefaultSubobject<URotatorComponent>(TEXT("Rotator"));

}
