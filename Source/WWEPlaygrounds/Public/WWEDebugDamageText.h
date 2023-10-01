#pragma once
#include "CoreMinimal.h"
#include "WWEDebugDamageText.generated.h"

USTRUCT(BlueprintType)
struct FWWEDebugDamageText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float DamageAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float LifeTime;
    
    WWEPLAYGROUNDS_API FWWEDebugDamageText();
};

