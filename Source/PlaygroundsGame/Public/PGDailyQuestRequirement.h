#pragma once
#include "CoreMinimal.h"
#include "EPGDailyQuestConditionalOperator.h"
#include "PGDailyQuestRequirement.generated.h"

USTRUCT(BlueprintType)
struct FPGDailyQuestRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequirementTypeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPGDailyQuestConditionalOperator ConditionalOperatorTypeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Values;
    
    PLAYGROUNDSGAME_API FPGDailyQuestRequirement();
};

