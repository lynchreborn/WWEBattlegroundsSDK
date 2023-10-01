#pragma once
#include "CoreMinimal.h"
#include "EItemBloodline.h"
#include "WWEUnlockedSkinItem.generated.h"

USTRUCT(BlueprintType)
struct FWWEUnlockedSkinItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SkinItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemBloodline> FromBloodlines;
    
    WWEPLAYGROUNDS_API FWWEUnlockedSkinItem();
};

