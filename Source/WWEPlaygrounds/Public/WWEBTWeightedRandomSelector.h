#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTCompositeNode.h"
#include "EWWEAIWeight.h"
#include "WWEBTWeightedRandomSelector.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEBTWeightedRandomSelector : public UBTCompositeNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWWEAIWeight> WeightConfig;
    
public:
    UWWEBTWeightedRandomSelector();
};

