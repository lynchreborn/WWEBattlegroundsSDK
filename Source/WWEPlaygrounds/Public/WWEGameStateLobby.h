#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PGEditableArenaConfigWithOwner.h"
#include "PGGameStateLobby.h"
#include "ESBTeam.h"
#include "WWEGameplayBackendInitialSettings.h"
#include "WWEGameplayInitialSettings.h"
#include "WWESyncGameSettings.h"
#include "WWEGameStateLobby.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEGameStateLobby : public APGGameStateLobby {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAllPlayerDataReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasSyncGameSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle AudioFadeOutTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bAreMatchPlayersValidated;
    
public:
    AWWEGameStateLobby();
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetPlayerSlotSkillTree(const FString& SkillTree, int32 PlayerId, const FString& CharacterID);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetGameplayInitialSettings(const FWWEGameplayInitialSettings& GameplayInitialSettings);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetGameplayBackendInitialSettings(const FWWEGameplayBackendInitialSettings& GameplayBackendInitialSettings);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSendMatchInfoTeamForPlayerSlot(ESBTeam Team, int32 PlayerSlotIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSendGameSettings(FWWESyncGameSettings RepGameSettings);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastReplicateWWEEditableArenaConfig(FPGEditableArenaConfigWithOwner _EditableArenaConfig);
    
};

