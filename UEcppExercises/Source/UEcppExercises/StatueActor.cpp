// Fill out your copyright notice in the Description page of Project Settings.


#include "StatueActor.h"

// Sets default values
AStatueActor::AStatueActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//RandomMoveComponent = CreateDefaultSubobject<URandomMoveComponent>(TEXT("Random Move Component"));
	//const auto RandomLocation = UStatueHelpers::RandomLocation(GetActorLocation(), Radius);
	//SetActorLocation(RandomLocation);
}

// Called when the game starts or when spawned
void AStatueActor::BeginPlay()
{
	Super::BeginPlay();

	//const auto Owner = GetOwner();
	//const auto RandomLocation = UStatueHelpers::RandomLocation(Owner->GetActorLocation(), Radius);
	//Owner->SetActorLocation(RandomLocation);
	
}

void AStatueActor::Pickup_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, FString("Wohoo, used the interface!"));
	//todo: add score
	Destroy();
}
