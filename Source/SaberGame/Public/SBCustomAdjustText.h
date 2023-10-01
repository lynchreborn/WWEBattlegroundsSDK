#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBStylizedText.h"
#include "SBCustomAdjustText.generated.h"

UCLASS(Blueprintable)
class SABERGAME_API USBCustomAdjustText : public USBStylizedText {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D VirtualSizeBox;
    
public:
    USBCustomAdjustText();
};

