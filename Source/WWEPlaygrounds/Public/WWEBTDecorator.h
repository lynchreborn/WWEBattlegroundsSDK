#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "WWEBTDecorator.generated.h"

UCLASS(Abstract, Blueprintable)
class WWEPLAYGROUNDS_API UWWEBTDecorator : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlackboardKeySelector> BlackboardKeys;
    
public:
    UWWEBTDecorator();
};

