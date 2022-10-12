// Fill out your copyright notice in the Description page of Project Settings.


#include "Brick_Robotico.h"

FString ABrick_Robotico::ToFString()
{
	return FString::Printf(TEXT("nombre del ladrillo: %s"), *nombre_robotico);
}
