// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Brick.h"
#include "Brick_Robotico.generated.h"

/**
 * 
 */
UCLASS()
class BRICKSBREAKER_LAB03_API ABrick_Robotico : public ABrick
{
	GENERATED_BODY()

public:

	UPROPERTY(EditEnywhere, BlueprintReadOnly)
		FString nombre_robotico;
	UPROPERTY(EditEnywhere, BlueprintReadOnly)
		FString ToFString();

	void contrataque();
	void aumento_velocidad();
	void aumento_Vida();
	
};
