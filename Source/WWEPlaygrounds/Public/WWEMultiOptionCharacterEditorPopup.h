#pragma once
#include "CoreMinimal.h"
#include "SBRootUserWidget.h"
#include "WWEMultiOptionCharacterEditorPopup.generated.h"

class UCanvasPanel;
class USBStylizedText;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEMultiOptionCharacterEditorPopup : public USBRootUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* MessageTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* NormalButtonPanel;
    
public:
    UWWEMultiOptionCharacterEditorPopup();
};

