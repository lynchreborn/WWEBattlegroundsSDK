#pragma once
#include "CoreMinimal.h"
#include "PGClaimedDailyQuestReward.h"
#include "PGDailyQuestBarData.h"
#include "ESBPopupSceneClosingReason.h"
#include "SBAlbumScreen.h"
#include "EWWEDailyQuestScreenState.h"
#include "WWEDailyQuestScreen.generated.h"

class UPGDailyQuest;
class USBPlatformBar;
class UTextBlock;
class UWWEDailyQuest;
class UWWEDailyQuestInfoEntry;
class UWWEDailyQuestProgressBar;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEDailyQuestScreen : public USBAlbumScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWWEDailyQuest*> StoredDailyQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FPGDailyQuestBarData StoredDailyQuestBarData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWWEDailyQuestInfoEntry*> DailyQuestInfoEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEDailyQuestInfoEntry* Slot1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEDailyQuestInfoEntry* Slot2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEDailyQuestInfoEntry* Slot3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* InfoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEDailyQuestProgressBar* ProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* RightPlatformBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* LeftPlatformBar;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEDailyQuestScreenState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCanCashInQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPGDailyQuest*> Temp_QuestsToCashIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPGClaimedDailyQuestReward> Temp_Rewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FPGDailyQuestBarData Temp_NewBarData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 Temp_QuestToCashIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 Temp_QuestRewardToCashIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 Temp_BarRewardToCashIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float Temp_OriginalExpCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float Temp_OriginalSoftCurrencyCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float Temp_OriginalHardCurrencyCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 Temp_QuestToRerollIndex;
    
public:
    UWWEDailyQuestScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void RecoverFocus();
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialPopupClosed(ESBPopupSceneClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnScreenTransitionEnds();
    
    UFUNCTION(BlueprintCallable)
    void CashIn_CashInIteration();
    
};

