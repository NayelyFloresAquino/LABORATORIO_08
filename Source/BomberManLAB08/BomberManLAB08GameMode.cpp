// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberManLAB08GameMode.h"
#include "BomberManLAB08Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Laberinto.h"
ABomberManLAB08GameMode::ABomberManLAB08GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ABomberManLAB08GameMode::BeginPlay()
{
	ALaberinto* prototipo = GetWorld()->SpawnActor<ALaberinto>(ALaberinto::StaticClass(), FVector(-720.0f, 250.0f, 130.0f), FRotator::ZeroRotator);
	if (prototipo) 
	{
		FVector Pos = prototipo->GetActorLocation();
		FVector posicion2 = Pos + FVector(200.0f, 0.0f, 0.0f);
		float Dis = 200.0f;
		AActor* clon = prototipo->Clonar(posicion2, Dis);
		if (clon)
		{
			
		}
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("¡Clon creado correctamente!"));
	}
}
