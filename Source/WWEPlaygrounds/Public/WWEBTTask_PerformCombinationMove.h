#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ECombinationType.h"
#include "EWWEActionNodeResult.h"
#include "EWWECombinationInput.h"
#include "EWWECombinationList.h"
#include "WWEBTTask.h"
#include "WWEBTTask_PerformCombinationMove.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEBTTask_PerformCombinationMove : public UWWEBTTask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWECombinationList ForceCombination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBTNodeResult::Type> CurrentNodeResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECombinationType ComboType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<EWWECombinationInput> CombinationInput;
    
public:
    UWWEBTTask_PerformCombinationMove();
    UFUNCTION(BlueprintCallable)
    void OnActionEnd(EWWEActionNodeResult Result);
    
};

