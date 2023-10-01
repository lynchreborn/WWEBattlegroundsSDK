#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WWEDisableAmbientSoundComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WWEPLAYGROUNDS_API UWWEDisableAmbientSoundComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UWWEDisableAmbientSoundComponent();
};

