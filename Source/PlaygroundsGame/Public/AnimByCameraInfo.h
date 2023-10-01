#pragma once
#include "CoreMinimal.h"
#include "AnimByCameraInfo.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FAnimByCameraInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CameraTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Animation;
    
    PLAYGROUNDSGAME_API FAnimByCameraInfo();
};

