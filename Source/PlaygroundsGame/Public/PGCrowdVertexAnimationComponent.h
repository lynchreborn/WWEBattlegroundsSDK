#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PGCrowdVertexAnimationComponent.generated.h"

class UFunction;
class UMaterialParameterCollection;
class UMaterialParameterCollectionInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PLAYGROUNDSGAME_API UPGCrowdVertexAnimationComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MaterialParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheeringIncrement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondsPerTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollectionInstance* MaterialParameterCollectionInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FName TransitionMaterialParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UFunction* FunctionToExecuteAfterTransition;
    
public:
    UPGCrowdVertexAnimationComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnReachZeroChearUp();
    
    UFUNCTION(BlueprintCallable)
    void IncrementCheeringCrowdPercentage();
    
    UFUNCTION(BlueprintCallable)
    void DecreaseCheeringCrowdPercentage();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateChange();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateCanCheer();
    
    UFUNCTION(BlueprintCallable)
    void ActivateCanCheer();
    
};

