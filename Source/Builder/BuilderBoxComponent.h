// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameplayTagContainer.h"
#include "BuilderBoxComponent.generated.h"

/**
 * 
 */
UCLASS(meta=(DisplayName="Builder Box Collision", BlueprintSpawnableComponent))
class BUILDER_API UBuilderBoxComponent : public UBoxComponent
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Setting)
	FGameplayTag SlotType;
};
