#pragma once
#include "CoreMinimal.h"
#include "WWEVanityItemAvailableMaterials.generated.h"

class UMaterialInstance;
class UTexture2D;

USTRUCT(BlueprintType)
struct FWWEVanityItemAvailableMaterials {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInstance>> MaterialsInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> VanityItemWidgetImage;
    
    WWEPLAYGROUNDS_API FWWEVanityItemAvailableMaterials();
};

