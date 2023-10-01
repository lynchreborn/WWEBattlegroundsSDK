#pragma once
#include "CoreMinimal.h"
#include "EWWENumberSuperstarts.h"
#include "WWERoyalRumbleMatchConfig.generated.h"

USTRUCT(BlueprintType)
struct FWWERoyalRumbleMatchConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWENumberSuperstarts NumberOfSuperStars;
    
    WWEPLAYGROUNDS_API FWWERoyalRumbleMatchConfig();
};

