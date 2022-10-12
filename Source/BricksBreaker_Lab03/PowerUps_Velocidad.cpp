// Fill out your copyright notice in the Description page of Project Settings.


#include "PowerUps_Velocidad.h"

FString UPowerUps_Velocidad::ToFString()
{
    return FString::Printf(TEXT("nombre velocidad: %s"), *nombre_power);
}
