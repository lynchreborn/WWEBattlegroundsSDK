#pragma once
#include "CoreMinimal.h"
#include "EWWESpecialStateCheck.h"
#include "WWEBTDecorator_AbortBase.h"
#include "WWEBTDecorator_CheckSpecialState.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEBTDecorator_CheckSpecialState : public UWWEBTDecorator_AbortBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWESpecialStateCheck StateToCheck;
    
public:
    UWWEBTDecorator_CheckSpecialState();
};

