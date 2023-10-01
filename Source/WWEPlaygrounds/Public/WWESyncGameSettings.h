#pragma once
#include "CoreMinimal.h"
#include "PGEditableArenaConfigWithOwner.h"
#include "PGSyncGameSettings.h"
#include "WWESyncLobbyConfiguration.h"
#include "WWESyncPlayerData.h"
#include "WWESyncPlayerSlotSettings.h"
#include "WWESyncGameSettings.generated.h"

USTRUCT(BlueprintType)
struct FWWESyncGameSettings : public FPGSyncGameSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FWWESyncLobbyConfiguration LobbyConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWESyncPlayerSlotSettings> PlayerSlotSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWESyncPlayerData> PlayersData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FPGEditableArenaConfigWithOwner EditableArenaConfig;
    
    WWEPLAYGROUNDS_API FWWESyncGameSettings();
};

