#pragma once
#include "CoreMinimal.h"
#include "WWEChallengeMessageInfo.generated.h"

USTRUCT(BlueprintType)
struct FWWEChallengeMessageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FirstText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SecondText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDailyQuestChallenge;
    
    WWEPLAYGROUNDS_API FWWEChallengeMessageInfo();
};

