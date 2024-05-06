// Fill out your copyright notice in the Description page of Project Settings.


#include "BuilderFunctionLibrary.h"
#include "BuilderBoxComponent.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "Engine/SimpleConstructionScript.h"
#include "Engine/SCS_Node.h"


UE_DISABLE_OPTIMIZATION

FRotator UBuilderFunctionLibrary::GetSlotRotator(const TSubclassOf<AActor>& TriggerClass, const FGameplayTag& SlotType)
{
	UBlueprintGeneratedClass* RootBlueprintGeneratedClass = Cast<UBlueprintGeneratedClass>(TriggerClass);
	const TArray<USCS_Node*>& ActorBlueprintNodes = RootBlueprintGeneratedClass->SimpleConstructionScript->GetAllNodes();

	for(auto Node : ActorBlueprintNodes)
	{
		UBuilderBoxComponent* SlotComp = Cast<UBuilderBoxComponent>(Node->GetActualComponentTemplate(RootBlueprintGeneratedClass));
		if(SlotComp != nullptr && SlotComp->SlotType == SlotType)
		{
			return SlotComp->GetRelativeRotation();
		}
	}

	return FRotator();
}

UE_ENABLE_OPTIMIZATION