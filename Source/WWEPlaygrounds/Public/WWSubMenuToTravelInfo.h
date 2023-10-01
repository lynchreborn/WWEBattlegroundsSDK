#pragma once
#include "CoreMinimal.h"
#include "WWSubMenuToTravelInfo.generated.h"

USTRUCT(BlueprintType)
struct FWWSubMenuToTravelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    uint8 bTravelToSubmenu: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FName SubMenuName;
    
    WWEPLAYGROUNDS_API FWWSubMenuToTravelInfo();
};

