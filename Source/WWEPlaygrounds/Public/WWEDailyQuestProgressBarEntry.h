#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBUserWidget.h"
#include "WWEDailyQuestProgressBarEntry.generated.h"

class UImage;
class USBStylizedText;
class USizeBox;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEDailyQuestProgressBarEntry : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* RewardText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* RewardIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* ProgressText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* RewardIconBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CurrencyImageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ItemImageSize;
    
public:
    UWWEDailyQuestProgressBarEntry();
};

