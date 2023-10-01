#pragma once
#include "CoreMinimal.h"
#include "WWEMorpherOverride.h"
#include "WWEMorpherInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FWWEMorpherInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText VisualName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> MorpherItemWidgetImageUnselected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> MorpherItemWidgetImageSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEMorpherOverride> MorpherOverrides;
    
    WWEPLAYGROUNDS_API FWWEMorpherInfo();
};

