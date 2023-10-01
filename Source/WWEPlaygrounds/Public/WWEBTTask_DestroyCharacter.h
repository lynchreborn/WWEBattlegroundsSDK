#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "WWEBTTask_DestroyCharacter.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEBTTask_DestroyCharacter : public UBTTaskNode {
    GENERATED_BODY()
public:
    UWWEBTTask_DestroyCharacter();
};

