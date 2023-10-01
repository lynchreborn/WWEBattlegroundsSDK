#pragma once
#include "CoreMinimal.h"
#include "PGGameModeGameplay.h"
#include "WWEGameModeGameplay.generated.h"

UCLASS(Blueprintable, NonTransient)
class WWEPLAYGROUNDS_API AWWEGameModeGameplay : public APGGameModeGameplay {
    GENERATED_BODY()
public:
    AWWEGameModeGameplay();
};

