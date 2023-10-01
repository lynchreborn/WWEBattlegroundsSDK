#pragma once
#include "CoreMinimal.h"
#include "WWEProgressionForUserLevel.h"
#include "WWEGameGeneralConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FWWEGameGeneralConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWEProgressionForUserLevel> ProgressionForUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWEProgressionForUserLevel> AccumulativeProgressionForUser;
    
    WWEPLAYGROUNDS_API FWWEGameGeneralConfiguration();
};

