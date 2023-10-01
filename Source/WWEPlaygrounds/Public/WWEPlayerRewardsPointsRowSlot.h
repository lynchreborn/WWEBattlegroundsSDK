#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWEPlayerRewardsPointsRowSlot.generated.h"

class UImage;
class USBStylizedText;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEPlayerRewardsPointsRowSlot : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* PointsSlotText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* PointsSlotInvalid;
    
public:
    UWWEPlayerRewardsPointsRowSlot();
};

