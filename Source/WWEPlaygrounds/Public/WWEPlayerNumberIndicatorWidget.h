#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWEPlayerNumberIndicatorWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEPlayerNumberIndicatorWidget : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PlayerNumberIndicator;
    
public:
    UWWEPlayerNumberIndicatorWidget();
};

