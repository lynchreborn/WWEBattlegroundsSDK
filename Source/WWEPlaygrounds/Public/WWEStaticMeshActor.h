#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "WWEStaticMeshActor.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEStaticMeshActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondsUntilActorDisappears;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bHasAcceleratedAlready;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bHasDynamicMaterialBeenSet;
    
public:
    AWWEStaticMeshActor();
    UFUNCTION(BlueprintCallable)
    void ActivatePhysics(float Impulse, float MinimumAngularImpulse, float MaximumAngularImpulse);
    
};

