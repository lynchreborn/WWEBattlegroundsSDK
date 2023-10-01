#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBCameraShakeTags.h"
#include "SBDefaultContentFeedback.generated.h"

UCLASS(Blueprintable)
class SABERGAME_API USBDefaultContentFeedback : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBCameraShakeTags> CameraShakeTags;
    
    USBDefaultContentFeedback();
};

