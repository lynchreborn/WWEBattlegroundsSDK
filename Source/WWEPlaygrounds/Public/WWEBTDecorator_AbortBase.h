#pragma once
#include "CoreMinimal.h"
#include "WWEBTDecorator.h"
#include "WWEBTDecorator_AbortBase.generated.h"

class UBehaviorTreeComponent;

UCLASS(Abstract, Blueprintable)
class WWEPLAYGROUNDS_API UWWEBTDecorator_AbortBase : public UWWEBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* CachedBehaviorTreeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bLastCheck;
    
public:
    UWWEBTDecorator_AbortBase();
};

