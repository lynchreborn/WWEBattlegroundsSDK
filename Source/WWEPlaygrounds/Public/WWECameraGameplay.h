#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PGCameraGameplay.h"
#include "Templates/SubclassOf.h"
#include "WWECameraGameplay.generated.h"

class UCameraShake;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWECameraGameplay : public APGCameraGameplay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CullingAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebugCullingCone;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShake> CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
public:
    AWWECameraGameplay();
protected:
    UFUNCTION(BlueprintCallable)
    void StartCameraHandheldShake();
    
};

