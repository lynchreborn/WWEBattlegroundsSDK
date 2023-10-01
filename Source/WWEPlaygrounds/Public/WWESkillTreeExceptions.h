#pragma once
#include "CoreMinimal.h"
#include "EWWEFightingStyle.h"
#include "WWESkillTreeExceptions.generated.h"

USTRUCT(BlueprintType)
struct FWWESkillTreeExceptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEFightingStyle FightingStyle;
    
    WWEPLAYGROUNDS_API FWWESkillTreeExceptions();
};

