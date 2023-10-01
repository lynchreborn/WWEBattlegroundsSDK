#pragma once
#include "CoreMinimal.h"
#include "SBRootUserWidget.h"
#include "WWEControlsComboSection.generated.h"

class USBStylizedText;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEControlsComboSection : public USBRootUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* SectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* OptionSelectorsVerticalBox;
    
    UWWEControlsComboSection();
};

