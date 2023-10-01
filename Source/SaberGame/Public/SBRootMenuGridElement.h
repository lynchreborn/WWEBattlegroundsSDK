#pragma once
#include "CoreMinimal.h"
#include "SBMenuGridElement.h"
#include "SBRootMenuGridElement.generated.h"

class USBGrayableImage;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBRootMenuGridElement : public USBMenuGridElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableIfNotInstalled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBGrayableImage*> GrayableImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayElementIdleOnlyWhenSelected;
    
public:
    USBRootMenuGridElement();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivateText(bool bActivate);
    
};

