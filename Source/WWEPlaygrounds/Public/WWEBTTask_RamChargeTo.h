#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "WWEBTTask_RamChargeTo.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEBTTask_RamChargeTo : public UBTTask_MoveTo {
    GENERATED_BODY()
public:
    UWWEBTTask_RamChargeTo();
};

