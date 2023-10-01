#pragma once
#include "CoreMinimal.h"
#include "CharacterRenderCameraInfo.generated.h"

class ASceneCapture2D;

USTRUCT(BlueprintType)
struct FCharacterRenderCameraInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CameraTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASceneCapture2D* SceneCapture2D;
    
    WWEPLAYGROUNDS_API FCharacterRenderCameraInfo();
};

