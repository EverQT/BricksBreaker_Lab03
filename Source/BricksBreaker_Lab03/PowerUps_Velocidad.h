// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PowerUps.h"
#include "PowerUps_Velocidad.generated.h"

/**
 * 
 */
UCLASS()
class BRICKSBREAKER_LAB03_API UPowerUps_Velocidad : public UPowerUps
{
	GENERATED_BODY()

	UPROPERTY(EditEnywhere, BlueprintReadOnly)
		FString nombre_velocidad;
	UPROPERTY(EditEnywhere, BlueprintReadOnly)
		FString ToFString();
	
	void aumenta();
	void disminuye();
};
