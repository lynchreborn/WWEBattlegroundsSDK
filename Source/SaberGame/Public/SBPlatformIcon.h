#pragma once
#include "CoreMinimal.h"
#include "ESBControllerTypeSource.h"
#include "SBNotificationUserWidget.h"
#include "SBPlatformIcon.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBPlatformIcon : public USBNotificationUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* IconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBControllerTypeSource ControllerTypeSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IconStyleName;
    
public:
    USBPlatformIcon();
};

