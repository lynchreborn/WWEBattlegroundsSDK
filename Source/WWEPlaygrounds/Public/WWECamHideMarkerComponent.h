#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "WWECamHideMarkerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WWEPLAYGROUNDS_API UWWECamHideMarkerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UWWECamHideMarkerComponent();
};

