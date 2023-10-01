#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "SBWidgetTextureComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SABERGAME_API USBWidgetTextureComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    USBWidgetTextureComponent();
};

