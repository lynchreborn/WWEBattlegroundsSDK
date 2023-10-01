#pragma once
#include "CoreMinimal.h"
#include "WWECrowdGreetInfo.generated.h"

class USoundCue;

USTRUCT(BlueprintType)
struct FWWECrowdGreetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> CrowdSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationDuration;
    
    WWEPLAYGROUNDS_API FWWECrowdGreetInfo();
};

