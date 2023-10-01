#pragma once
#include "CoreMinimal.h"
#include "SBRootUserWidget.h"
#include "WWEKingOfTheRingSlotCountdown.generated.h"

class USBStylizedText;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEKingOfTheRingSlotCountdown : public USBRootUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* CountdownText;
    
public:
    UWWEKingOfTheRingSlotCountdown();
};

