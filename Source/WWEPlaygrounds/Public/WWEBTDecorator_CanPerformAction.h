#pragma once
#include "CoreMinimal.h"
#include "EWWEInputAction.h"
#include "WWEBTDecorator_AbortBase.h"
#include "WWEBTDecorator_CanPerformAction.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEBTDecorator_CanPerformAction : public UWWEBTDecorator_AbortBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEInputAction Action;
    
public:
    UWWEBTDecorator_CanPerformAction();
};

