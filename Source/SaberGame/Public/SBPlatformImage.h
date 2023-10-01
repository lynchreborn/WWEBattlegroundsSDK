#pragma once
#include "CoreMinimal.h"
#include "ESBControllerType.h"
#include "ESBControllerTypeSource.h"
#include "SBNotificationUserWidget.h"
#include "SBPlatformImage.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBPlatformImage : public USBNotificationUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* PlatformImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBControllerTypeSource ControllerTypeSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextureName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBControllerType ForceControllerType;
    
public:
    USBPlatformImage();
};

