// Fill out your copyright notice in the Description page of Project Settings.


#include "Brick_Alienigena.h"

FString ABrick_Alienigena::ToFString()
{
	return FString::Printf(TEXT("nombre del ladrillo: %s"), *nombre_alienigena);
}
