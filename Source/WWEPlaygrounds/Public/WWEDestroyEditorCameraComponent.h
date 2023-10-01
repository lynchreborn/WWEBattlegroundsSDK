#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WWEDestroyEditorCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WWEPLAYGROUNDS_API UWWEDestroyEditorCameraComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UWWEDestroyEditorCameraComponent();
};

