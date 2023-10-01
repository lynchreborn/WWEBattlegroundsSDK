#pragma once
#include "CoreMinimal.h"
#include "Components/InputComponent.h"
#include "SBInputComponent.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SABERGAME_API USBInputComponent : public UInputComponent {
    GENERATED_BODY()
public:
    USBInputComponent();
};

