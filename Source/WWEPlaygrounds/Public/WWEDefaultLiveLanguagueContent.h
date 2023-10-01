#pragma once
#include "CoreMinimal.h"
#include "WWEDefaultLiveLanguagueContent.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FWWEDefaultLiveLanguagueContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> smallimage;
    
    WWEPLAYGROUNDS_API FWWEDefaultLiveLanguagueContent();
};

