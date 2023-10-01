#pragma once
#include "CoreMinimal.h"
#include "WWECrosshairVisuals.h"
#include "WWEHelicopterCrosshairVisuals.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEHelicopterCrosshairVisuals : public AWWECrosshairVisuals {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* GroundSnappedCrosshair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RegularCrosshair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HideRegularTolerance;
    
public:
    AWWEHelicopterCrosshairVisuals();
};

