#pragma once
#include "CoreMinimal.h"
#include "SBRootUserWidget.h"
#include "WWEWrestlersDetailsFightingStyle.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEWrestlersDetailsFightingStyle : public USBRootUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* FightingStyleIcon;
    
public:
    UWWEWrestlersDetailsFightingStyle();
};

