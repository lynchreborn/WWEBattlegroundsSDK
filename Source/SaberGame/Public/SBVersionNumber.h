#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "SBVersionNumber.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBVersionNumber : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* VersionText;
    
public:
    USBVersionNumber();
};

