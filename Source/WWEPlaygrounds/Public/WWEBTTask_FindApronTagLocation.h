#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "WWEBTTask_FindApronTagLocation.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEBTTask_FindApronTagLocation : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UWWEBTTask_FindApronTagLocation();
};

