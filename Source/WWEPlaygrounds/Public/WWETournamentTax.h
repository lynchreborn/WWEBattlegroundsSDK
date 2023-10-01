#pragma once
#include "CoreMinimal.h"
#include "WWETournamentTax.generated.h"

USTRUCT(BlueprintType)
struct FWWETournamentTax {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> Costs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 Lives;
    
    WWEPLAYGROUNDS_API FWWETournamentTax();
};

