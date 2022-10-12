// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PowerUps.h"
#include "PowerUps_Multiplicar.generated.h"

/**
 * 
 */
UCLASS()
class BRICKSBREAKER_LAB03_API UPowerUps_Multiplicar : public UPowerUps
{
	GENERATED_BODY()
	
	UPROPERTY(EditEnywhere, BlueprintReadOnly)
		FString nombre_multiplicar;
	UPROPERTY(EditEnywhere, BlueprintReadOnly)
		FString ToFString();

	void tipo();
	void multiplica();
	void destruye();
};
