// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Brick.h"
#include "Brick_Metalico.generated.h"

/**
 * 
 */
UCLASS()
class BRICKSBREAKER_LAB03_API ABrick_Metalico : public ABrick
{
	GENERATED_BODY()

public:

	UPROPERTY(EditEnywhere, BlueprintReadOnly)
		FString nombre_metalico;
	UPROPERTY(EditEnywhere, BLueprintReadOnly)
		FString ToFString();

	void rebote();
	void indestructible();
	
};
