#pragma once
#include "CoreMinimal.h"
#include "WWEHUDBarComposition.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FWWEHUDBarComposition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* HUDBorderBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* HUDBackgroundBar;
    
    WWEPLAYGROUNDS_API FWWEHUDBarComposition();
};

