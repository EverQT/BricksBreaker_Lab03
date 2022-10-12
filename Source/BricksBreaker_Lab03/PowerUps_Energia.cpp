// Fill out your copyright notice in the Description page of Project Settings.


#include "PowerUps_Energia.h"

FString UPowerUps_Energia::ToFString()
{
    return FString::Printf(TEXT("nombre de energia: %s"), *nombre_energia);
}
