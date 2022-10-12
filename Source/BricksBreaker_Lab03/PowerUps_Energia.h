// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PowerUps.h"
#include "PowerUps_Energia.generated.h"

/**
 * 
 */
UCLASS()
class BRICKSBREAKER_LAB03_API UPowerUps_Energia : public UPowerUps
{
	GENERATED_BODY()

	UPROPERTY(EditEnywhere, BlueprintReadOnly)
		FString nombre_energia;
	UPROPERTY(EditEnywhere, BlueprintReadOnly)
		FString ToFString();

	void aumento();
	void disminuye();
	
};
