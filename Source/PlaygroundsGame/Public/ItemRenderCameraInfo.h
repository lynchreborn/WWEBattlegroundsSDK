#pragma once
#include "CoreMinimal.h"
#include "ItemRenderCameraInfo.generated.h"

class ASceneCapture2D;

USTRUCT(BlueprintType)
struct FItemRenderCameraInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CameraTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASceneCapture2D* SceneCapture2D;
    
    PLAYGROUNDSGAME_API FItemRenderCameraInfo();
};

