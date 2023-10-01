#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WWEItemReward.h"
#include "WWEObjectReward.generated.h"

class USBItemParameters;

USTRUCT(BlueprintType)
struct FWWEObjectReward : public FWWEItemReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBItemParameters> ResourceObject;
    
    WWEPLAYGROUNDS_API FWWEObjectReward();
};

