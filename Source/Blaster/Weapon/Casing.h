// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Casing.generated.h"

UCLASS()
class BLASTER_API ACasing : public AActor
{
	GENERATED_BODY()
	
public:	
	ACasing();
private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* CasingMesh;

protected:
	virtual void BeginPlay() override;
};
