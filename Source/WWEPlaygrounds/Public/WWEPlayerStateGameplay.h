#pragma once
#include "CoreMinimal.h"
#include "PGPlayerStateGameplay.h"
#include "WWEPlayerStateGameplay.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEPlayerStateGameplay : public APGPlayerStateGameplay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float WorldTimeEntryRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float CurrentTimeOnRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 RecordTimeOnRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 RecordKickOuts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_NumKickOuts, meta=(AllowPrivateAccess=true))
    int32 NumKickOuts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FString CachedUniqueIdLeftPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FString CachedSessionIdLeftPlayer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bKing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> DefeatedCharactersOverall;
    
public:
    AWWEPlayerStateGameplay();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_NumKickOuts();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastCharacterReadPlayerSlotAndCacheEnvironmentData();
    
};

