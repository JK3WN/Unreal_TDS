// Fill out your copyright notice in the Description page of Project Settings.


#include "TDSPlayerState.h"
#include "AbilitySystemComponent.h"


ATDSPlayerState::ATDSPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystemComp");
	AbilitySystemComponent->SetIsReplicated(true);
}

UAbilitySystemComponent* ATDSPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
