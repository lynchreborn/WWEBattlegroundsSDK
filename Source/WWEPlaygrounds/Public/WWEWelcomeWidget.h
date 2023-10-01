#pragma once
#include "CoreMinimal.h"
#include "SBWelcomeWidget.h"
#include "WWEWelcomeWidget.generated.h"

class USBStylizedText;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEWelcomeWidget : public USBWelcomeWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* FirstTextPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* SecondTextPart;
    
public:
    UWWEWelcomeWidget();
};

