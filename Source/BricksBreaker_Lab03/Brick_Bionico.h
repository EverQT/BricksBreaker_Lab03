// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Brick.h"
#include "Brick_Bionico.generated.h"

/**
 * 
 */
UCLASS()
class BRICKSBREAKER_LAB03_API ABrick_Bionico : public ABrick
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(EditEnywhere, BlueprintReadOnly)
		FString nombre_bionico;
	UPROPERTY(EditEniwhere, BlueprintReadOnly)
		FString ToFString();


	void aumenta_velocidad();
	void disminuye_velocidad();
	void revotar();
};
