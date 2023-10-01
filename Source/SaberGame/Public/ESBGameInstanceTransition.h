#pragma once
#include "CoreMinimal.h"
#include "ESBGameInstanceTransition.generated.h"

UENUM(BlueprintType)
enum class ESBGameInstanceTransition : uint8 {
    Unknown,
    StartingUp,
    MainMenuToLobby,
    LobbyToMatch,
    LobbyToMainMenu,
    LobbyToLobby,
    MatchToMainMenu,
    MatchToLobby,
    MainMenuToMainMenu,
};

