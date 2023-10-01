#pragma once
#include "CoreMinimal.h"
#include "ESBPickupType.h"
#include "SBPickupTypeName.generated.h"

USTRUCT(BlueprintType)
struct FSBPickupTypeName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBPickupType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    SABERGAME_API FSBPickupTypeName();
};

