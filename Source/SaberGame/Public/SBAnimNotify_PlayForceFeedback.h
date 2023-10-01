#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SBAnimNotify_PlayForceFeedback.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SABERGAME_API USBAnimNotify_PlayForceFeedback : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ForceFeedbackEffectName;
    
public:
    USBAnimNotify_PlayForceFeedback();
};

