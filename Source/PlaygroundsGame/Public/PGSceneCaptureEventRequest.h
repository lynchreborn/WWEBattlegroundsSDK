#pragma once
#include "CoreMinimal.h"
#include "PGSceneCaptureEventRequest.generated.h"

class APGSceneCapture2D;

USTRUCT(BlueprintType)
struct FPGSceneCaptureEventRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APGSceneCapture2D* SceneCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bActivate;
    
    PLAYGROUNDSGAME_API FPGSceneCaptureEventRequest();
};

