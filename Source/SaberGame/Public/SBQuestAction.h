#pragma once
#include "CoreMinimal.h"
#include "ESBQuestConditionalOperator.h"
#include "SBQuestAction.generated.h"

USTRUCT(BlueprintType)
struct SABERGAME_API FSBQuestAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActionTypeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBQuestConditionalOperator ConditionalOperatorTypeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentProgress;
    
    FSBQuestAction();
};

