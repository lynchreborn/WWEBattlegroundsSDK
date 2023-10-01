#pragma once
#include "CoreMinimal.h"
#include "Engine/GameEngine.h"
#include "PGGameEngine.generated.h"

UCLASS(Blueprintable, NonTransient)
class PLAYGROUNDSGAME_API UPGGameEngine : public UGameEngine {
    GENERATED_BODY()
public:
    UPGGameEngine();
};

