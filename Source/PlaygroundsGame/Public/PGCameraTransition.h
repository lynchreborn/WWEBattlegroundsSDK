#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "PGCameraTransition.generated.h"

USTRUCT(BlueprintType)
struct FPGCameraTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FromTaggedCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ToTaggedCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewTargetTransitionParams BlendParameters;
    
    PLAYGROUNDSGAME_API FPGCameraTransition();
};

