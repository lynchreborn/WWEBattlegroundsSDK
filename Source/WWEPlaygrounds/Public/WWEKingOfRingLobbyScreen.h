#pragma once
#include "CoreMinimal.h"
#include "ESBPopupSceneClosingReason.h"
#include "WWELobbyScreen.h"
#include "WWEKingOfRingLobbyScreen.generated.h"

class UAudioComponent;
class USoundBase;
class UWWEKingOfTheRingLobbyStats;
class UWWELobbySlot;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEKingOfRingLobbyScreen : public UWWELobbyScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEKingOfTheRingLobbyStats* KOTRPlayerStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWELobbySlot* LobbySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool FirstConfigureScreenDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCanceledLobbyScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bInsideLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* MMAudioPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundBase* MMSound;
    
public:
    UWWEKingOfRingLobbyScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTutorialPopupClosed(ESBPopupSceneClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnScreenTransitionEnds();
    
};

