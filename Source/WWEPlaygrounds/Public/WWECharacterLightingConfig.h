#pragma once
#include "CoreMinimal.h"
#include "WWECharacterLightingConfig.generated.h"

USTRUCT(BlueprintType)
struct FWWECharacterLightingConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LightTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightPercentage;
    
    WWEPLAYGROUNDS_API FWWECharacterLightingConfig();
};

