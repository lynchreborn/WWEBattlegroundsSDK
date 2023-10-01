#pragma once
#include "CoreMinimal.h"
#include "EPGMatchDifficultyConfigs.h"
#include "PGLobbyScreen.h"
#include "ESBMessageBoxClosingReason.h"
#include "Templates/SubclassOf.h"
#include "WWECharacterParameterNamedFilter.h"
#include "WWSubMenuToTravelInfo.h"
#include "WWELobbyScreen.generated.h"

class APGPlayerState;
class UPanelWidget;
class USBPlatformBar;
class UWWELobbySlot;
class UWWELobbyTimer;
class UWWELobbyUnassignedPlayersBox;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWELobbyScreen : public UPGLobbyScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWELobbySlot> LobbySlotClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* VSWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* SlotsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWELobbyTimer* Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWELobbyUnassignedPlayersBox* UnassignedPlayersBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* OnlineInitialMessageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* BPLeftPlatformBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* BPRightPlatformBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWECharacterParameterNamedFilter> AvailableFilters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<APGPlayerState*> PlayersToTryConfirmAvailableAiSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<APGPlayerState*> PlayersToTryClearAssignedAis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> CurrentlyBlockedCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FName CurrentMapToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EPGMatchDifficultyConfigs CurrentDifficulty;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    uint8 bSaveDataLoaded: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FWWSubMenuToTravelInfo SubmenuToTravelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bOnTransitionToMatch;
    
public:
    UWWELobbyScreen();
private:
    UFUNCTION(BlueprintCallable)
    void ShowLobbyTutorial();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExitLobby_TransitionFinished();
    
    UFUNCTION(BlueprintCallable)
    void ExitLobby_MessageBoxClosed(ESBMessageBoxClosingReason Reason);
    
};

