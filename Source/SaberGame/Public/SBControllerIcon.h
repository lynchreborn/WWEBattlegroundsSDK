#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "SBControllerIcon.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBControllerIcon : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* IconImage;
    
public:
    USBControllerIcon();
};

