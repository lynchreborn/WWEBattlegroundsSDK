#pragma once
#include "CoreMinimal.h"
#include "SBBaseScene.h"
#include "Templates/SubclassOf.h"
#include "SBSimpleWidgetScene.generated.h"

class UUserWidget;
class UWidget;

UCLASS(Blueprintable)
class SABERGAME_API USBSimpleWidgetScene : public USBBaseScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> WidgetAP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> WidgetBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZOrder;
    
    USBSimpleWidgetScene();
protected:
    UFUNCTION(BlueprintCallable)
    void CheckAddToTransitionableElements(UWidget* ChildWidget);
    
};

