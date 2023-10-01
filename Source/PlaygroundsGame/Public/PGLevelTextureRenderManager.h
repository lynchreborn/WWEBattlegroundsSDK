#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PGRenderLevel.h"
#include "PGSceneCaptureEventRequest.h"
#include "PGLevelTextureRenderManager.generated.h"

class APGSceneCapture2D;

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API APGLevelTextureRenderManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPGRenderLevel> RenderLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InitialGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPGSceneCaptureEventRequest> RenderRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APGSceneCapture2D*> FirstFrameRenderRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString LastActivatedLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> PendingLevels;
    
public:
    APGLevelTextureRenderManager();
};

