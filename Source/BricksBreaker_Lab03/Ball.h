// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Ball.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BRICKSBREAKER_LAB03_API UBall : public UActorComponent
{
	GENERATED_BODY()

		/* The mesh component */
		UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* BallMeshComponent;


private:
	FString color;
	float tamano;
	float forma;


public:

	//metodos accesores

	// Setter color
	void setcolor(FString _color) {
		color = _color;
	}
	// Getter
	FString getcolor() {
		return color;
	}

	// Setter tamaño
	void settamano(float _tamano) {
		tamano = _tamano;
	}
	// Getter
	float gettamano() {
		return tamano;
	}

	// Setter sprite
	void setforma(float _forma) {
		forma = _forma;
	}
	// Getter
	float getforma() {
		return forma;
	}

	/*
	//accesor no se puede realizar

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float gettamano() { return tamano; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setLife(float _tamano) { tamano = _tamano; }
	//accesor color
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString getcolor() { return color; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setcolor(FString _color) { color = _color; }
	*/
	//funcion nombre

	UPROPERTY(EditAnywhere, blueprintReadWrite)
		FString nombre;
	UFUNCTION(BlueprintCallable, Category = Propiedades)
		FString ToFString();

	/*void destruir();
	void revotar();
	void desaparecer();
	void reaparecer();
	*/
public:	
	// Sets default values for this component's properties
	UBall();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
