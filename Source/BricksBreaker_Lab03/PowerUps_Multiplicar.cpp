// Fill out your copyright notice in the Description page of Project Settings.


#include "PowerUps_Multiplicar.h"

FString UPowerUps_Multiplicar::ToFString()
{
    return FString::Printf(TEXT("nombre de multiplicar: %s"), *nombre_multiplicar);
}
