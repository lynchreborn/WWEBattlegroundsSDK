#pragma once
#include "CoreMinimal.h"
#include "SBAudioManager.h"
#include "PGAudioManager.generated.h"

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API UPGAudioManager : public USBAudioManager {
    GENERATED_BODY()
public:
    UPGAudioManager();
};

