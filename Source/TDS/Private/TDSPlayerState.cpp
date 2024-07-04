// Fill out your copyright notice in the Description page of Project Settings.


#include "TDSPlayerState.h"
#include "AbilitySystemComponent.h"
#include "TDSHealthSet.h"

ATDSPlayerState::ATDSPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystemComp");
	AbilitySystemComponent->SetIsReplicated(true);

	HealthSet = CreateDefaultSubobject<UTDSHealthSet>("HealthSet");
}

UAbilitySystemComponent* ATDSPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
