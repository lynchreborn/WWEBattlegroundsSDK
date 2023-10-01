#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "SBPlatformSlot.generated.h"

class USBPlatformIcon;
class USBStylizedText;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBPlatformSlot : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformIcon* PlatformIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* DescriptionText;
    
public:
    USBPlatformSlot();
};

