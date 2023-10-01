#pragma once
#include "CoreMinimal.h"
#include "WWECharacterTextureMaps.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FWWECharacterTextureMaps {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> BodyMasks1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> BodyMasks2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> BodyNormalsMap;
    
    WWEPLAYGROUNDS_API FWWECharacterTextureMaps();
};

