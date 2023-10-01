#pragma once
#include "CoreMinimal.h"
#include "SBGameModeGameplay.h"
#include "PGGameModeGameplay.generated.h"

UCLASS(Blueprintable, NonTransient)
class PLAYGROUNDSGAME_API APGGameModeGameplay : public ASBGameModeGameplay {
    GENERATED_BODY()
public:
    APGGameModeGameplay();
};

