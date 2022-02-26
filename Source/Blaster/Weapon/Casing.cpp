// Fill out your copyright notice in the Description page of Project Settings.


#include "Casing.h"

// Sets default values
ACasing::ACasing()
{
	PrimaryActorTick.bCanEverTick = false;

	CasingMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CasingMesh"));
	SetRootComponent(CasingMesh);
}


void ACasing::BeginPlay()
{
	Super::BeginPlay();
	
}

