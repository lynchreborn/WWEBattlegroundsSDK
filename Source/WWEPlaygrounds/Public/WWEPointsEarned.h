#pragma once
#include "CoreMinimal.h"
#include "WWEPointsEarned.generated.h"

USTRUCT(BlueprintType)
struct FWWEPointsEarned {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverallPoints;
    
    WWEPLAYGROUNDS_API FWWEPointsEarned();
};

