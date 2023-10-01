#pragma once
#include "CoreMinimal.h"
#include "SBRootUserWidget.h"
#include "WWEBWarningScreen.generated.h"

class USBStylizedText;
class UWWEWelcomeWidget;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEBWarningScreen : public USBRootUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* WarningText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEWelcomeWidget* WelcomeWidget;
    
public:
    UWWEBWarningScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void OnFadeOutFinished();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFadeOut();
    
};

