#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "Types/SlateEnums.h"
#include "Templates/SubclassOf.h"
#include "WWEProgressionReward.h"
#include "WWERewardsList.generated.h"

class UHorizontalBox;
class USBTextStyle;
class UVerticalBox;
class UWWERewardSlot;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWERewardsList : public USBUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalElementsSeparation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalElementsSeparation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxElementsPerSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWERewardSlot> SlotClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> SlotsAligment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBTextStyle> RewardsTextStyle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowPlusSymbol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddSpaceBeforeIcon;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalList;
    
public:
    UWWERewardsList();
    UFUNCTION(BlueprintCallable)
    void AddRewards(bool bIsVertical, const FWWEProgressionReward& Reward, bool bOnlyNumeric, bool bUseFrame);
    
    UFUNCTION(BlueprintCallable)
    void AddReward(bool bIsVertical);
    
};

