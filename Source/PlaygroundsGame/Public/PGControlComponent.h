#pragma once
#include "CoreMinimal.h"
#include "SBControlComponent.h"
#include "PGControlComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PLAYGROUNDSGAME_API UPGControlComponent : public USBControlComponent {
    GENERATED_BODY()
public:
    UPGControlComponent();
};

