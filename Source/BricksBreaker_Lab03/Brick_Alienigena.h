// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Brick.h"
#include "Brick_Alienigena.generated.h"

/**
 * 
 */
UCLASS()
class BRICKSBREAKER_LAB03_API ABrick_Alienigena : public ABrick
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditEnywhere, BlueprintReadOnly)
		FString nombre_alienigena;
	UPROPERTY(EditEnywhere, BlueprintReadOnly)
		FString ToFString();

	void tranformar();
	void revivir();
	void explotar();
};
