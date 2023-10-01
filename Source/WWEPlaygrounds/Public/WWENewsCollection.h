#pragma once
#include "CoreMinimal.h"
#include "WWELiveNewInformation.h"
#include "WWENewsCollection.generated.h"

USTRUCT(BlueprintType)
struct FWWENewsCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    FString default_lang;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    TArray<FWWELiveNewInformation> news;
    
    WWEPLAYGROUNDS_API FWWENewsCollection();
};

