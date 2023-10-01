#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "WWEBTTask.generated.h"

UCLASS(Abstract, Blueprintable)
class WWEPLAYGROUNDS_API UWWEBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UWWEBTTask();
};

