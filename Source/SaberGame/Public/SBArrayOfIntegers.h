#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SBArrayOfIntegers.generated.h"

USTRUCT(BlueprintType)
struct SABERGAME_API FSBArrayOfIntegers : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Value;
    
    FSBArrayOfIntegers();
};

