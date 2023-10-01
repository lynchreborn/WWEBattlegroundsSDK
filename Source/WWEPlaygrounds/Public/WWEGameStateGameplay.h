#pragma once
#include "CoreMinimal.h"
#include "PGGameStateGameplay.h"
#include "EWWEGameplayState.h"
#include "WWEGameStateGameplay.generated.h"

class APGAmbientSound;
class USBUserWidget;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEGameStateGameplay : public APGGameStateGameplay {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GameplayState, meta=(AllowPrivateAccess=true))
    EWWEGameplayState GameplayState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentCameraInUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    APGAmbientSound* AmbientSoundMusic;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBUserWidget* BlackWidget;
    
public:
    AWWEGameStateGameplay();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_GameplayState();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetPlayersRewards(bool bWasSuccessful, const FString& PlayerRewards);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastClientShutdownNetwork();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastClientOnResultsScreenPlayAgainPressed();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastClientFadeOutToLobby();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitGameplaySettings();
    
public:
    UFUNCTION(BlueprintCallable)
    void GameplayValidateMatch();
    
};

