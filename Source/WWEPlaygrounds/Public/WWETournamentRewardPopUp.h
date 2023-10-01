#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ESBPopupSceneClosingReason.h"
#include "SBRootUserWidget.h"
#include "EWWETournamentPopUpType.h"
#include "WWETournamentRewardPopUp.generated.h"

class UOverlay;
class UWWERewardsList;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWETournamentRewardPopUp : public USBRootUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWERewardsList* RewardsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* ReachedNewCheckpointOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* EnterAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* IdleAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ExitAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle AnimTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWETournamentPopUpType TournamentPopUpType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bExitting;
    
public:
    UWWETournamentRewardPopUp();
protected:
    UFUNCTION(BlueprintCallable)
    void SetDesiredFocus();
    
    UFUNCTION(BlueprintCallable)
    void RemoveScene(ESBPopupSceneClosingReason ClosingReason);
    
};

