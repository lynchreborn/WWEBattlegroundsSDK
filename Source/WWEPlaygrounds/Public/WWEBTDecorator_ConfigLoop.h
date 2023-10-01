#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_Loop.h"
#include "EWWEAICount.h"
#include "WWEBTDecorator_ConfigLoop.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEBTDecorator_ConfigLoop : public UBTDecorator_Loop {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEAICount LoopConfig;
    
public:
    UWWEBTDecorator_ConfigLoop();
};

