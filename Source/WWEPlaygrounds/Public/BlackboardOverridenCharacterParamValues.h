#pragma once
#include "CoreMinimal.h"
#include "SBBlackboardStorable.h"
#include "OverridenValues.h"
#include "BlackboardOverridenCharacterParamValues.generated.h"

USTRUCT(BlueprintType)
struct FBlackboardOverridenCharacterParamValues : public FSBBlackboardStorable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FOverridenValues> OverridenValues;
    
    WWEPLAYGROUNDS_API FBlackboardOverridenCharacterParamValues();
};

