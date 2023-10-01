#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SBAnimNotify_PlayCameraShake.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SABERGAME_API USBAnimNotify_PlayCameraShake : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraShakeTag;
    
public:
    USBAnimNotify_PlayCameraShake();
};

