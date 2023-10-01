#pragma once
#include "CoreMinimal.h"
#include "AnimByCameraCharacterInfo.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FAnimByCameraCharacterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CameraTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> DefaultAnimations;
    
    WWEPLAYGROUNDS_API FAnimByCameraCharacterInfo();
};

