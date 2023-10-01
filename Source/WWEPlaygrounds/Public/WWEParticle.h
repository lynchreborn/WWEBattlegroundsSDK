#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WWEParticle.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FWWEParticle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> Template;
    
    WWEPLAYGROUNDS_API FWWEParticle();
};

