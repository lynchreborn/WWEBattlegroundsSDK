#pragma once
#include "CoreMinimal.h"
#include "ECombinationType.h"
#include "WWEBTDecorator.h"
#include "WWEBTDecorator_SelectCombination.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEBTDecorator_SelectCombination : public UWWEBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECombinationType ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyLongRange;
    
public:
    UWWEBTDecorator_SelectCombination();
};

