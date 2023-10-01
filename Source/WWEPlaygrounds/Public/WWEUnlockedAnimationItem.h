#pragma once
#include "CoreMinimal.h"
#include "EItemBloodline.h"
#include "WWEUnlockedAnimationItem.generated.h"

USTRUCT(BlueprintType)
struct FWWEUnlockedAnimationItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemBloodline> FromBloodlines;
    
    WWEPLAYGROUNDS_API FWWEUnlockedAnimationItem();
};

