#pragma once
#include "CoreMinimal.h"
#include "WWEHUDPortraitComposition.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FWWEHUDPortraitComposition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* HUDProtraitBorderAlone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* HUDProtraitBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* HUDProtraitBackground;
    
    WWEPLAYGROUNDS_API FWWEHUDPortraitComposition();
};

