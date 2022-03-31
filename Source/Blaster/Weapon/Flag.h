// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon.h"
#include "Flag.generated.h"

/**
 * 
 */
UCLASS()
class BLASTER_API AFlag : public AWeapon
{
	GENERATED_BODY()
public:
	AFlag();
	virtual void Dropped() override;
protected:
	virtual void OnEquipped() override;
	virtual void OnDropped() override;
private:

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* FlagMesh;
};
