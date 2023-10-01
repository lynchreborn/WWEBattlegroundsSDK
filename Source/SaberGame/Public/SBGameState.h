#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "ESBWaitingGameState.h"
#include "SBTeam.h"
#include "SBGameState.generated.h"

UCLASS(Blueprintable)
class SABERGAME_API ASBGameState : public AGameState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBWaitingGameState WaitingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_WaitingState, meta=(AllowPrivateAccess=true))
    ESBWaitingGameState ReplicatedWaitingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBTeam> Teams;
    
public:
    ASBGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetWaitingState(ESBWaitingGameState NewState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_WaitingState();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnlineGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBWaitingGameState GetWaitingState() const;
    
};

