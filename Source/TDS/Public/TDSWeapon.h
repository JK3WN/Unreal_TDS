// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TDSWeapon.generated.h"

UCLASS()
class TDS_API ATDSWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATDSWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	void Equip();
	void UnEquip();

	UFUNCTION(BlueprintImplementableEvent, Category = "Equipping")
	void OnEquip();

	UFUNCTION(BlueprintImplementableEvent, Category = "Equipping")
	void OnUnEquip();
};
