// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BuilderFunctionLibrary.generated.h"

struct FGameplayTag;

/**
 * 
 */
UCLASS()
class BUILDER_API UBuilderFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, Category = "Builder|Helpers")
	static FRotator GetSlotRotator(const TSubclassOf<AActor>& TriggerClass, const FGameplayTag& SlotType);
};
