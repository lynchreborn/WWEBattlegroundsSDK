#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/GameInstance.h"
#include "ESBControllerType.h"
#include "SBControllerConnectionEvent.h"
#include "SBPartyPlayEvent.h"
#include "SBSessionInvitation.h"
#include "Templates/SubclassOf.h"
#include "SBGameInstance.generated.h"

class USBAudioManager;
class USBBlackboard;
class USBGameSettings;
class USBLobbyConfiguration;
class USBOnlineStateManager;
class USBProfanityFilter;
class USBSaveGame;
class USBSceneManager;

UCLASS(Blueprintable, NonTransient)
class SABERGAME_API USBGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBGameSettings* GameSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBSaveGame* SaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBSceneManager* SceneManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBAudioManager* AudioManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBOnlineStateManager* OnlineState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ImMatchmakingInvitee;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBBlackboard* Blackboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBGameSettings> GameSettingsClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FSoftClassPath GameSettingsClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBSaveGame> SaveDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ActivePlayerGamepadIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> AchievementsNames;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SaveGameName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProjectVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BuildVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBSessionInvitation> PendingInvitations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBSessionInvitation CurrentAcceptedInvitation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBPartyPlayEvent> PendingPartyPlayEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBPartyPlayEvent CurrentPartyPlayEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPerformingInitialActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bReturnToMainMenuOnInitialActionsCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWaitingToPerformInitialActionLogin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCurrentlyConnected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> ConnectedGamepads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, ESBControllerType> ControllerTypesMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBControllerConnectionEvent> ControllerConnectionEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBLobbyConfiguration> LobbyConfigurationClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USBLobbyConfiguration* LobbyConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBProfanityFilter> ProfanityFilterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USBProfanityFilter* ProfanityFilter;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DebugUnlockCombo;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugUnlockComboEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBAudioManager> AudioManagerClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChunksNumber;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCrossplayBeEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowCrossplayRankings;
    
public:
    USBGameInstance();
    UFUNCTION(BlueprintCallable)
    void SetAndExecuteMapCustomProfile();
    
    UFUNCTION(BlueprintCallable)
    void SetAndExecuteCustomProfile(const FString& _CustomProfileName);
    
    UFUNCTION(BlueprintCallable)
    void ResetNintendoSwitchSettings();
    
protected:
    UFUNCTION()
    void OnChunkInstalled(uint32 ChunkId, bool bSuccess);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGamepadConnected(int32 GamepadIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivePlayerGamepadIndex(int32 GamepadIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActivePlayerGamepadIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSupportedResolutions(TArray<FIntPoint>& Resolutions) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSplitScreens() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetConnectedGamepadsIndices() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetConnectedGamepads() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActivePlayerGamepadIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableNintendoSwitchSettings();
    
};

