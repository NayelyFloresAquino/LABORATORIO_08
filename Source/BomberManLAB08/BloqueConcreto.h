// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueConcreto.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMANLAB08_API ABloqueConcreto : public ABloque
{
	GENERATED_BODY()

public:
	ABloqueConcreto();

protected:
	virtual void BeginPlay() override;
};
