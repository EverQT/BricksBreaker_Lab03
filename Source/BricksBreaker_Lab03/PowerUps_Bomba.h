// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PowerUps.h"
#include "PowerUps_Bomba.generated.h"

/**
 * 
 */
UCLASS()
class BRICKSBREAKER_LAB03_API UPowerUps_Bomba : public UPowerUps
{
	GENERATED_BODY()

public:

	UPROPERTY(EditEnywhere, BlueprintReadOnly)
		FString nombre_bomba;
	UPROPERTY(EditEnywhere, BlueprintReadOnly)
		FString ToFString();
	
	void destruye();
	void explota();

};
