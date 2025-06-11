// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IClonPrototype.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIClonPrototype : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BOMBERMANLAB08_API IIClonPrototype
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual class AActor* Clonar(FVector Pos, float Dis) = 0;
};
