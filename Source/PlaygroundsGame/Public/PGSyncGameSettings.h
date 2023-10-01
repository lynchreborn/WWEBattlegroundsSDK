#pragma once
#include "CoreMinimal.h"
#include "SBSyncGameSettings.h"
#include "PGSyncGameSettings.generated.h"

USTRUCT(BlueprintType)
struct FPGSyncGameSettings : public FSBSyncGameSettings {
    GENERATED_BODY()
public:
    PLAYGROUNDSGAME_API FPGSyncGameSettings();
};

