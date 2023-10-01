#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EPGCrowdState.h"
#include "PGAnimNotify_SetCrowdState.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class PLAYGROUNDSGAME_API UPGAnimNotify_SetCrowdState : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPGCrowdState NewCrowdState;
    
public:
    UPGAnimNotify_SetCrowdState();
};

