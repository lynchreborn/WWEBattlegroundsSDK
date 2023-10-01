#pragma once
#include "CoreMinimal.h"
#include "WWEDefaultLiveNewInformation.h"
#include "WWEDefaultNewsCollection.generated.h"

USTRUCT(BlueprintType)
struct FWWEDefaultNewsCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString default_lang;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEDefaultLiveNewInformation> news;
    
    WWEPLAYGROUNDS_API FWWEDefaultNewsCollection();
};

