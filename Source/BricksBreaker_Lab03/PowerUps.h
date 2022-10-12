// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PowerUps.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BRICKSBREAKER_LAB03_API UPowerUps : public UActorComponent
{
	GENERATED_BODY()

		/* The mesh component */
		UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* PowerUpsMeshComponent;

private:
	FString nombre;
	FString forma;
	float ancho;
	float alto;

public:

	UPROPERTY(EditEnywhere, BlueprintReadOnly)
		FString nombre_power;
	UPROPERTY(EditEnywhere, BlueprintReadOnly)
		FString ToFString();

	void poscionX();
	void posicionY();
	void tipo();
	void aumento();
	void disminuye();
	

public:	
	// Sets default values for this component's properties
	UPowerUps();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
