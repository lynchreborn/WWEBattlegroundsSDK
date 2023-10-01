#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "NFLPhysicalAnimConfig.h"
#include "PGAnimNotify_EnablePhysicsAnimationBelowBone.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class PLAYGROUNDSGAME_API UPGAnimNotify_EnablePhysicsAnimationBelowBone : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNFLPhysicalAnimConfig> PhysicalAnimConfigs;
    
public:
    UPGAnimNotify_EnablePhysicsAnimationBelowBone();
};

