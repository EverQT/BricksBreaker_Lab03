// Fill out your copyright notice in the Description page of Project Settings.


#include "PowerUps_Bomba.h"

FString UPowerUps_Bomba::ToFString()
{
    return FString::Printf(TEXT("nombre del bomba: %s"), *nombre_bomba);
}
