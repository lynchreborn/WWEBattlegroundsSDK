#pragma once
#include "CoreMinimal.h"
#include "SBButton.h"
#include "SBStandaloneButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBStandaloneButton : public USBButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName PressActionName;
    
public:
    USBStandaloneButton();
};

