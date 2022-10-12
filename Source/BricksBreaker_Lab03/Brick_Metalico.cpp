// Fill out your copyright notice in the Description page of Project Settings.


#include "Brick_Metalico.h"

FString ABrick_Metalico::ToFString()
{
	return FString::Printf(TEXT("nombre del ladrillo: %s", *nombre_metalico));
}
