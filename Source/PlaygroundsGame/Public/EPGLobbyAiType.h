#pragma once
#include "CoreMinimal.h"
#include "EPGLobbyAiType.generated.h"

UENUM(BlueprintType)
enum class EPGLobbyAiType : uint8 {
    PlayerAssigned_Teammate,
    PlayerAssigned_Oponent,
    Independent,
    COUNT,
};

