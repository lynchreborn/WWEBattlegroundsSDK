#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBBasicOption.h"
#include "SBKeySelector.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBKeySelector : public USBBasicOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextblockValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor EditModeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlinkTime;
    
    USBKeySelector();
};

