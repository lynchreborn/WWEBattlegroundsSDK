#pragma once
#include "CoreMinimal.h"
#include "WWELiveLanguagueContent.generated.h"

USTRUCT(BlueprintType)
struct FWWELiveLanguagueContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    FString smallimage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    FString bigimage;
    
    WWEPLAYGROUNDS_API FWWELiveLanguagueContent();
};

