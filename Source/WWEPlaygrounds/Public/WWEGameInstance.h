#pragma once
#include "CoreMinimal.h"
#include "PGGameInstance.h"
#include "WWEMatchStatus.h"
#include "WWEGameInstance.generated.h"

class AActor;
class ALevelSequenceActor;
class UAudioComponent;
class ULevelSequencePlayer;
class UNakamaManager;
class USBEditableTextBox;
class UWWEAnalyticsManager;
class UWWECampaignManager;
class UWWECustomCharacterManager;
class UWWEGameGeneralConfigManager;
class UWWEKingOfTheRingManager;
class UWWELocalizationBackendManager;
class UWWEProgressionManager;
class UWWERoadToGloryManager;
class UWWETournamentManager;

UCLASS(Blueprintable, NonTransient)
class WWEPLAYGROUNDS_API UWWEGameInstance : public UPGGameInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaManager* NakamaManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWWEAnalyticsManager* AnalyticsManager;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> WorldInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWWECampaignManager* CampaignManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWWERoadToGloryManager* RoadToGloryManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWWEProgressionManager* ProgressionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWWETournamentManager* TournamentManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWWEKingOfTheRingManager* KingOfTheRingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWWECustomCharacterManager* CustomCharacterManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWWEGameGeneralConfigManager* GameGeneralConfigManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWWELocalizationBackendManager* LocalizationBackendManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UAudioComponent*> CurrentlyPlayingSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bLogActions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadAllStreamingLevelsAtInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FWWEMatchStatus CurrentMatchStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bLoadingCharacter;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* LevelSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* LevelSequenceTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<bool> bIsActiveAnalytics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FString PlayerRewardsMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsWWEPostLoginComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USBEditableTextBox* ActiveEditableTextBox;
    
public:
    UWWEGameInstance();
    UFUNCTION(BlueprintCallable)
    void StopCurrentSequence();
    
    UFUNCTION(BlueprintCallable)
    void SaveOptionsConfig(bool bCrossplayDisabled, float MusicVolumeParam, float FXVolumeParam, float VoicesParam, bool bInGameHelpDisabled);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatePlayerProgressionComplete(const int32 LocalUserNum, const FString& Message, const bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateExpiredVirtualCurrencyComplete(const FString& Message, const bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadingScreenOpen();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadingScreenClosed();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEditableTextBoxCloseVirtualKeyboard(const FText& Text);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsSaving() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCharacterUnlocked(const FString& CharacterID);
    
};

