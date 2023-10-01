#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWEObjectReward.h"
#include "WWERewardSlot.generated.h"

class UImage;
class USBStylizedText;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWERewardSlot : public USBUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* RewardText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* RewardImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* FrameImage;
    
    UWWERewardSlot();
private:
    UFUNCTION(BlueprintCallable)
    void SetRewardTextFromStrings(const FString& IntroString, const FString& ItemName);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetRewardText(const FWWEObjectReward& Reward);
    
};

