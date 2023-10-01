#pragma once
#include "CoreMinimal.h"
#include "SBVideoDisplayWidget.h"
#include "WWECharacterEditorTVWidget.generated.h"

class USBVideoItemData;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWECharacterEditorTVWidget : public USBVideoDisplayWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USBVideoItemData* NextVideoItem;
    
public:
    UWWECharacterEditorTVWidget();
};

