#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WWESkinItemAvailableColors.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FWWESkinItemAvailableColors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> SkinItemWidgetImage;
    
    WWEPLAYGROUNDS_API FWWESkinItemAvailableColors();
};

