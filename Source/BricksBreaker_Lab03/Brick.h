// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Brick.generated.h"

UCLASS()
class BRICKSBREAKER_LAB03_API ABrick : public AActor
{
	GENERATED_BODY()

		/* The mesh component */
		UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* BrickMeshComponent;

private:
	FString nombre;
	FString color;
	FString forma;
	float ancho;
	float alto;


public:

	/*
	//accesor no se puede realizar

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getancho() { return ancho; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setancho(float _ancho) { ancho = _ancho; }
	//accesor alto
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float getalto() { return alto; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setalto(float _alto) { alto = _alto; }
	*/

	UPROPERTY(EditAnywhere, blueprintReadWrite)
		FString color;
	UFUNCTION(BlueprintCallable, Category = Propiedades)
		FString ToFString();

	void destruirse();
	void mueve();
	void repeler();

	
public:	
	// Sets default values for this actor's properties
	ABrick();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
