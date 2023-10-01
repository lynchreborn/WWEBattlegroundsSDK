#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Components/RichTextBlockDecorator.h"
#include "ESBControllerTypeSource.h"
#include "SBRichTextBlockPlatformIconDecorator.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class SABERGAME_API USBRichTextBlockPlatformIconDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBControllerTypeSource ControllerTypeSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTemplateBrushImageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush TemplateBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultIconStyleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* CachedOwningPlayer;
    
public:
    USBRichTextBlockPlatformIconDecorator();
};

