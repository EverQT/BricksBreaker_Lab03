// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Paleta.generated.h"

UCLASS()
class BRICKSBREAKER_LAB03_API APaleta : public AActor
{
	GENERATED_BODY()

		/* The mesh component */
		UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* PaletaMeshComponent;
	
private:

	FString nombre;
	FString color;
	FString forma;
	float ancho;
	float alto;


public:

	UPROPERTY(EditEnywhere, BlueprintReadOnly)
		FString forma_paleta;
	UPROPERTY(EditEnywhere, BlueprintReadOnly)
		FString ToFString();

	void posicionX();
	void posicionY();
	void rebotar();
	void movimiento();
	void resucitar();


public:	
	// Sets default values for this actor's properties
	APaleta();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
