#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBControlComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SABERGAME_API USBControlComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USBControlComponent();
};

