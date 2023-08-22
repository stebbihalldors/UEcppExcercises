// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractComponent.h"

UInteractComponent::UInteractComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	TraceSphere = FCollisionShape::MakeSphere(Radius);
}


// Called when the game starts
void UInteractComponent::BeginPlay()
{
	Super::BeginPlay();
	Owner = GetOwner();
}


// Called every frame
void UInteractComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	TArray<FOverlapResult> CandidateActors;
	
	auto bBlockingHit = GetWorld()->OverlapMultiByChannel(CandidateActors, Owner->GetActorLocation(), FQuat::Identity, ECollisionChannel::ECC_GameTraceChannel1, TraceSphere);
	
	for (int i = 0; i < CandidateActors.Num(); i++)
	{
		// Call the interface on each collected actor
		AActor* ActorReference = CandidateActors[i].GetActor();

		if (ActorReference->Implements<UPickupInterface>())
		{
			IPickupInterface::Execute_Pickup(ActorReference);
		}
	}
}

