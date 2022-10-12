// Fill out your copyright notice in the Description page of Project Settings.


#include "Brick_Bionico.h"

FString ABrick_Bionico::ToFString()
{
	return FString::Printf(TEXT("nombre del ladrillo: %s"), *nombre_bionico);
}
