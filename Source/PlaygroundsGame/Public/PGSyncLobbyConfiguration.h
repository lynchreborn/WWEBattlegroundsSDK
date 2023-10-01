#pragma once
#include "CoreMinimal.h"
#include "SBSyncLobbyConfiguration.h"
#include "PGSyncLobbyConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FPGSyncLobbyConfiguration : public FSBSyncLobbyConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bUseLobbyTimer;
    
    PLAYGROUNDSGAME_API FPGSyncLobbyConfiguration();
};

