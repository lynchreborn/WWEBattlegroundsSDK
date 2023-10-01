#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "PGAnimNotify_PlayLevelSequence.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class PLAYGROUNDSGAME_API UPGAnimNotify_PlayLevelSequence : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelSequenceTag;
    
public:
    UPGAnimNotify_PlayLevelSequence();
};

