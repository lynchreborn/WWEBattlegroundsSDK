#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWERivalsCounter.generated.h"

class USBStylizedText;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWERivalsCounter : public USBUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* CounterText;
    
public:
    UWWERivalsCounter();
};

