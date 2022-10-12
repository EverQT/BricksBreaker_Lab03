// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Marker.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BRICKSBREAKER_LAB03_API UMarker : public USceneComponent
{
	GENERATED_BODY()

		/* The mesh component */
		UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* MarkerMeshComponent;

private:
	FString fuente;
	FString forma;
	FString color;
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


	UPROPERTY(EditEnywhere, BlueprintReadOnly)
		FString fuente;
	UPROPERTY(EditEnywhere, BlueprintReadOnly)
		FString ToFString();

	void posicionX();
	void posicionY();

public:	
	// Sets default values for this component's properties
	UMarker();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
