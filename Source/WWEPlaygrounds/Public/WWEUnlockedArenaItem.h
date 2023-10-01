#pragma once
#include "CoreMinimal.h"
#include "EItemBloodline.h"
#include "WWEUnlockedArenaItem.generated.h"

USTRUCT(BlueprintType)
struct FWWEUnlockedArenaItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ArenaItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemBloodline> FromBloodlines;
    
    WWEPLAYGROUNDS_API FWWEUnlockedArenaItem();
};

