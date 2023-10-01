#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBMessageBoxClosingReason.h"
#include "SBAlbumScreen.h"
#include "WWELeaderboardKOTRMenu.generated.h"

class USBPlatformBar;
class USBPlatformSlot;
class USBStylizedText;
class UWWELeaderboardKOTRRanking;
class UWWELeaderboardKOTRReward;
class UWWELeaderboardKOTRTimer;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWELeaderboardKOTRMenu : public USBAlbumScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWELeaderboardKOTRRanking* LeaderboardKOTRRanking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWELeaderboardKOTRTimer* LeaderboardKOTRTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWELeaderboardKOTRReward* LeaderboardKOTRRewardsGold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWELeaderboardKOTRReward* LeaderboardKOTRRewardsSilver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWELeaderboardKOTRReward* LeaderboardKOTRRewardsBronze;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* RightButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* LeaderboardTittle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoadGridQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bStopUpdateLeaderboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FString LeaderboardId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FString LeaderboardPlatformText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FString LeaderboardSuffix;
    
    UPROPERTY(EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int64 LeaderboardEndDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USBPlatformSlot* MyRankButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USBPlatformSlot* SwitchLeaderboardButton;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 MyCurrentRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FString MyPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FDateTime EndDateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bTimeEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCountdownEnabled;
    
public:
    UWWELeaderboardKOTRMenu();
private:
    UFUNCTION(BlueprintCallable)
    void TimeoutMsgClosed(ESBMessageBoxClosingReason Cause);
    
    UFUNCTION(BlueprintCallable)
    void RefreshingErrorMsgClosed(ESBMessageBoxClosingReason Cause);
    
    UFUNCTION(BlueprintCallable)
    void RecoverFocus(ESBMessageBoxClosingReason Cause);
    
};

