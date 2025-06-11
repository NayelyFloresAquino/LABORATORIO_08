// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BomberManLAB08GameMode.generated.h"
class ABloque;
UCLASS(minimalapi)
class ABomberManLAB08GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABomberManLAB08GameMode();

public:
	virtual void BeginPlay() override;
};



