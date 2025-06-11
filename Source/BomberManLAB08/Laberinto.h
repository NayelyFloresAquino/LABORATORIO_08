// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "IClonPrototype.h"
#include "Laberinto.generated.h"

UCLASS()
class BOMBERMANLAB08_API ALaberinto : public AActor, public IIClonPrototype
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALaberinto();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MallaBloque;
	// Declarar un mapa de bloques como un array bidimensional

	TArray<TArray<int32>> aMapaBloques;

	float XInicial = -1000.00f;
	float YInicial = -1000.00f;
	float ZInicial = 0.0f;
	float AnchoBloque = 100.0f;
	float LargoBloque = 100.0f;
	//ABloque* BloqueActual = nullptr;
	// Declarar un array de punteros a objetos de tipo BloqueMadera
	TArray<ABloque*> aBloques;

	FTimerHandle tHDestruirBloques;

	void SpawnBloque(FVector posicion, int32 tipoBloque);
	//void DestruirBloque();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual AActor* Clonar(FVector Pos, float Dis) override;
	void GenerarLaberintoSimetrico();
	FVector PosicionInicial;
	float DistanciaObjetivo = 1000.0f;
	// Indica si es un clon (para evitar doble generación)
	bool bEsClon = false;
};
