#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWENextRivalWidget.generated.h"

class UImage;
class USBStylizedText;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWENextRivalWidget : public USBUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* TimerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* RivalPortrait;
    
public:
    UWWENextRivalWidget();
};

