#pragma once
#include "CoreMinimal.h"
#include "EPGDailyQuestConditionalOperator.h"
#include "PGDailyQuestAction.generated.h"

USTRUCT(BlueprintType)
struct FPGDailyQuestAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActionTypeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPGDailyQuestConditionalOperator ConditionalOperatorTypeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentProgress;
    
    PLAYGROUNDSGAME_API FPGDailyQuestAction();
};

