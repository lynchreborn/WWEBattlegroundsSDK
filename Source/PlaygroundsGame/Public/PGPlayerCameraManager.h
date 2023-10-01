#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "SBPlayerCameraManager.h"
#include "PGCameraTransition.h"
#include "PGPlayerCameraManager.generated.h"

class AActor;

UCLASS(Blueprintable, NonTransient)
class PLAYGROUNDSGAME_API APGPlayerCameraManager : public ASBPlayerCameraManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPGCameraTransition> TransitionParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AActor* FutureViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FViewTargetTransitionParams FutureTransition;
    
public:
    APGPlayerCameraManager();
};

