#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EWWEOtherCollider.h"
#include "WWEAnimNotify_EnableCollisionWithOthers.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class WWEPLAYGROUNDS_API UWWEAnimNotify_EnableCollisionWithOthers : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWWEOtherCollider, bool> Collisions;
    
public:
    UWWEAnimNotify_EnableCollisionWithOthers();
};

