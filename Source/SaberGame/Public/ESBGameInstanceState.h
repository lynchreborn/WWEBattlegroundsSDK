#pragma once
#include "CoreMinimal.h"
#include "ESBGameInstanceState.generated.h"

UENUM(BlueprintType)
enum class ESBGameInstanceState : uint8 {
    Unknown,
    MainMenu,
    Lobby,
    Playing,
};

