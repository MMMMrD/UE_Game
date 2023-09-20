// Fill out your copyright notice in the Description page of Project Settings.


#include "RaycastComponent.h"

// Sets default values for this component's properties
URaycastComponent::URaycastComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void URaycastComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void URaycastComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

APawn* URaycastComponent::FindPawnCameraIsLookingAt() 
{
	//可以在这定义有关追踪的各种属性
	FCollisionQueryParams params;
	
	//忽略玩家属性
	//params.AddIgnoredActor(GetPawn());

	FHitResult hit;

	//FVector start = PlayerCameraManager->

	return nullptr;
}

