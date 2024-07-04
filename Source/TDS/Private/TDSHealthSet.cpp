// Fill out your copyright notice in the Description page of Project Settings.


#include "TDSHealthSet.h"
#include "Net/UnrealNetwork.h"

UTDSHealthSet::UTDSHealthSet()
	: Health(40.0f), MaxHealth(60.0f)
{
	
}

void UTDSHealthSet::ClampAttributeOnChange(const FGameplayAttribute& Attribute, float& NewValue) const
{
	if(Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxHealth());
	}
}

void UTDSHealthSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UTDSHealthSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UTDSHealthSet, MaxHealth, COND_None, REPNOTIFY_Always);
}

void UTDSHealthSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UTDSHealthSet, Health, OldHealth);
}

void UTDSHealthSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UTDSHealthSet, MaxHealth, OldMaxHealth);
}
