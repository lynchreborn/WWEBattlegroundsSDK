#pragma once
#include "CoreMinimal.h"
#include "SBGameStateLobby.h"
#include "PGGameStateLobby.generated.h"

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API APGGameStateLobby : public ASBGameStateLobby {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SyncingFinalDataTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TimerCountdownTime, meta=(AllowPrivateAccess=true))
    int32 TimerCountdownTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> CachedPendingClaimInteralUserIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> CachedPendingClaimSlotIndexes;
    
public:
    APGGameStateLobby();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SyncingFinalDataTimer();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TimerCountdownTime();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastNotifyNegotiatedBalanceVersion(int32 NegotiatedBalanceVersion);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastDenySetLobbySlotStatus(int32 SenderPlayerId);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastAllowSetLobbySlotStatus(int32 SenderPlayerId, const TArray<int32>& SlotIndexArray, const TArray<FString>& LobbySlotRawDataArray);
    
};

