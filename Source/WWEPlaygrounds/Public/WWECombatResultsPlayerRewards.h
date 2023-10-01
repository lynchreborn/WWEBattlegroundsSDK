#pragma once
#include "CoreMinimal.h"
#include "SBRootUserWidget.h"
#include "EWWEPlayerRewardsState.h"
#include "Templates/SubclassOf.h"
#include "WWEProgressionReward.h"
#include "WWECombatResultsPlayerRewards.generated.h"

class UAudioComponent;
class UCanvasPanel;
class USBPlatformBar;
class USBStylizedText;
class UUMGSequencePlayer;
class UWWECombatResultsEndButtons;
class UWWEDefaultContentUI;
class UWWEGameInstance;
class UWWEPlayerLevelUp;
class UWWEPlayerRewardsLevelProgress;
class UWWEPlayerRewardsPointsCommon;
class UWWEPlayerRewardsPointsKOTR;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWECombatResultsPlayerRewards : public USBRootUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugUserXPToConsume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugUserXPToConsume;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEPlayerRewardsPointsCommon> PlayerRewardsPointsCommonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEPlayerRewardsPointsKOTR> PlayerRewardsPointsKOTRClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* username;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* RightPlatformBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* RewardPointsCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* RewardsCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* ButtonsCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWECombatResultsEndButtons* EndButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEPlayerRewardsLevelProgress* LevelProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEPlayerLevelUp* LevelUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HideScreenAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShowScreenAnim;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToNextState[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeUntilLevelUp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEDefaultContentUI* ContentUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* CurrentLoopingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UUMGSequencePlayer* AnimationPlayer;
    
public:
    UWWECombatResultsPlayerRewards();
protected:
    UFUNCTION(BlueprintCallable)
    void WaitAndGoNextState(float WaitTime);
    
    UFUNCTION(BlueprintCallable)
    void UserLeveledUpWait(int32 PreviousUserLevel, int32 NewUserLevel);
    
    UFUNCTION(BlueprintCallable)
    void UserLeveledUp(int32 PreviousUserLevel, int32 NewUserLevel, FWWEProgressionReward UnlockedReward);
    
    UFUNCTION(BlueprintCallable)
    void SetState(EWWEPlayerRewardsState NextState);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetProgressBar();
    
protected:
    UFUNCTION(BlueprintCallable)
    void GoNextState();
    
public:
    UFUNCTION(BlueprintCallable)
    void FinishedRewards();
    
    UFUNCTION(BlueprintCallable)
    void ClearTimerHandles();
    
};

