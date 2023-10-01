#pragma once
#include "CoreMinimal.h"
#include "PGEditableArenaConfigWithOwner.h"
#include "PGPlayerControllerLobby.h"
#include "WWESyncPlayerData.h"
#include "WWESyncSaveData.h"
#include "WWEPlayerControllerLobby.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEPlayerControllerLobby : public APGPlayerControllerLobby {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWWESyncPlayerData PlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPGEditableArenaConfigWithOwner LocalEditableArenaConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString LocalArenaChampionshipMapId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LocalEditableArenaChampionshipMapId;
    
    AWWEPlayerControllerLobby();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPlayerData(const FWWESyncPlayerData& NewPlayerData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSendWWERepSaveData(const FWWESyncSaveData& RepSaveData);
    
};

