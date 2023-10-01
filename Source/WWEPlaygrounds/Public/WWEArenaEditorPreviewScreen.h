#pragma once
#include "CoreMinimal.h"
#include "SBRootUserWidget.h"
#include "WWEArenaEditorPreviewScreen.generated.h"

class USBPlatformBar;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEArenaEditorPreviewScreen : public USBRootUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* RightPlatformBar;
    
public:
    UWWEArenaEditorPreviewScreen();
};

