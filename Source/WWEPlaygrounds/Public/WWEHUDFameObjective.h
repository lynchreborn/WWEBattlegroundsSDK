#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "Blueprint/UserWidget.h"
#include "WWEFameObjectiveInfo.h"
#include "WWEPlaygrounds/Public/USBUserWidget.h"
#include "WWEHUDFameObjective.generated.h"

class UCanvasPanel;
class USBStylizedText;
class USoundBase;
class UWWERewardSlot;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEHUDFameObjective : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWERewardSlot* RewardSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* TitlePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* DescriptionPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* InAnimationSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* OutAnimationSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWEFameObjectiveInfo> MessageList;
    
public:
    UWWEHUDFameObjective();
protected:
    UFUNCTION(BlueprintCallable)
    void OnHideAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayAnimation(float StartAtTime, int32 NumberOfLoops, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed);
    
    UFUNCTION(BlueprintCallable)
    void BP_CheckNextMessage();
    
};

