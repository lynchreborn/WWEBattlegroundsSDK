#pragma once
#include "CoreMinimal.h"
#include "SBSaveGame.h"
#include "PGSaveGame.generated.h"

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API UPGSaveGame : public USBSaveGame {
    GENERATED_BODY()
public:
    UPGSaveGame();
};

