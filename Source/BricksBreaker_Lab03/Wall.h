// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Wall.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BRICKSBREAKER_LAB03_API UWall : public USceneComponent
{
	GENERATED_BODY()

		/* The mesh component */
		UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* WallMeshComponent;

private:
	FString nombre;
	FString color;
	float tamano;
	float ancho;
	float alto;

public:

	/*
	//accesor no se puede realizar

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float gettamano() { return tamano; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void settamano(float _tamano) { tamano = _tamano; }
	//accesor color
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString getcolor() { return color; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		void setcolor(FString _color) { color = _color; }
	*/
	//funcion nombre

	UPROPERTY(EditAnywhere, blueprintReadWrite)
		FString color_wall;
	UFUNCTION(BlueprintCallable, Category = Propiedades)
		FString ToFString();

	void poscicionX();
	void posicionY();
	void indestructible();
	void revote();

public:	
	// Sets default values for this component's properties
	UWall();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
