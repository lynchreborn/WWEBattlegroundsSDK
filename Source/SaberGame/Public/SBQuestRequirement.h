#pragma once
#include "CoreMinimal.h"
#include "ESBQuestConditionalOperator.h"
#include "SBQuestRequirement.generated.h"

USTRUCT(BlueprintType)
struct SABERGAME_API FSBQuestRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequirementTypeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBQuestConditionalOperator ConditionalOperatorTypeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Values;
    
    FSBQuestRequirement();
};

