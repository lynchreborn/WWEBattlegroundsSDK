#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "PGAnimNotify_SetRootMotionMode.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class PLAYGROUNDSGAME_API UPGAnimNotify_SetRootMotionMode : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRootMotion;
    
public:
    UPGAnimNotify_SetRootMotionMode();
};

