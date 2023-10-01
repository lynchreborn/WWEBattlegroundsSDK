#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "WWEBTTask_MoveToDynTolerance.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEBTTask_MoveToDynTolerance : public UBTTask_MoveTo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector DynamicTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDynamicTolerance: 1;
    
public:
    UWWEBTTask_MoveToDynTolerance();
};

