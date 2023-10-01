#pragma once
#include "CoreMinimal.h"
#include "EItemBloodline.h"
#include "WWEUnlockedBoxItem.generated.h"

USTRUCT(BlueprintType)
struct FWWEUnlockedBoxItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BoxItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemBloodline> FromBloodlines;
    
    WWEPLAYGROUNDS_API FWWEUnlockedBoxItem();
};

