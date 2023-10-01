#pragma once
#include "CoreMinimal.h"
#include "EItemBloodline.h"
#include "WWEUnlockedPowerUpItem.generated.h"

USTRUCT(BlueprintType)
struct FWWEUnlockedPowerUpItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PowerUpItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PowerUpLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemBloodline> FromBloodlines;
    
    WWEPLAYGROUNDS_API FWWEUnlockedPowerUpItem();
};

