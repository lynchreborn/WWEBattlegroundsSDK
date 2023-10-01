#pragma once
#include "CoreMinimal.h"
#include "ESBTeam.h"
#include "PGPlayerState.h"
#include "PGPlayerStateGameplay.generated.h"

class UPGDailyQuest;

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API APGPlayerStateGameplay : public APGPlayerState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerSlotIndex, meta=(AllowPrivateAccess=true))
    int32 PlayerSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bHotJoining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bHotJoined;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPGDailyQuest*> CurrentDailyQuests;
    
public:
    APGPlayerStateGameplay();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerSlotIndex();
    
public:
    UFUNCTION(BlueprintCallable)
    ESBTeam GetTeam() const;
    
    UFUNCTION(BlueprintCallable)
    void CharacterReadPlayerSlot();
    
};

