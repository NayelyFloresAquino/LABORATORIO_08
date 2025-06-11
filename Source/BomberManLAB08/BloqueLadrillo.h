// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueLadrillo.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMANLAB08_API ABloqueLadrillo : public ABloque
{
	GENERATED_BODY()

public:
	ABloqueLadrillo();

protected:
	virtual void BeginPlay() override;
};
