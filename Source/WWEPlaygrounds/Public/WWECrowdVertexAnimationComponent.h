#pragma once
#include "CoreMinimal.h"
#include "PGCrowdVertexAnimationComponent.h"
#include "WWECrowdVertexAnimationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WWEPLAYGROUNDS_API UWWECrowdVertexAnimationComponent : public UPGCrowdVertexAnimationComponent {
    GENERATED_BODY()
public:
    UWWECrowdVertexAnimationComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateBackgroundCheerUpPercentage();
    
    UFUNCTION(BlueprintCallable)
    void OnCheerUpEnd();
    
};

