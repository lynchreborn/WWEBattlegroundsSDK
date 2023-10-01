#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBUserWidget.generated.h"

class USBWidgetScene;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USBWidgetScene* OwnerScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UWidgetAnimation*> WidgetAnimations;
    
public:
    USBUserWidget();
};

