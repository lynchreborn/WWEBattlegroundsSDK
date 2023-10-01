#pragma once
#include "CoreMinimal.h"
#include "WWEWeightedListAnimation.generated.h"

class UWWEActionData;

USTRUCT(BlueprintType)
struct FWWEWeightedListAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWWEActionData*> Actions;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Weight;
    
    WWEPLAYGROUNDS_API FWWEWeightedListAnimation();
};

