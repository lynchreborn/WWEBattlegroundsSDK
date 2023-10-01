#pragma once
#include "CoreMinimal.h"
#include "WWEHUDBarComposition.h"
#include "WWEHUDPortraitComposition.h"
#include "WWEHUDImageComposition.generated.h"

USTRUCT(BlueprintType)
struct FWWEHUDImageComposition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEHUDPortraitComposition PortraitComposition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEHUDBarComposition BarComposition;
    
    WWEPLAYGROUNDS_API FWWEHUDImageComposition();
};

