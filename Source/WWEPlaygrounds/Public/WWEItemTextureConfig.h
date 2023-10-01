#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPGCharacterBody.h"
#include "WWETextureMapsConfig.h"
#include "WWEItemTextureConfig.generated.h"

class UTexture;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEItemTextureConfig : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> FallbackItemTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> FallbackMasks1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> FallbackMasks2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> FallbackNormalsMap;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWETextureMapsConfig Textures[6];
    
public:
    UWWEItemTextureConfig();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWWETextureMapsConfig GetTexturesByType(EPGCharacterBody Body) const;
    
};

