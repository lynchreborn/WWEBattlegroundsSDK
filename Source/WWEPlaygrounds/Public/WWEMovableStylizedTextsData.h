#pragma once
#include "CoreMinimal.h"
#include "WWEMovableStylizedTextData.h"
#include "WWEMovableStylizedTextsData.generated.h"

USTRUCT(BlueprintType)
struct FWWEMovableStylizedTextsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEMovableStylizedTextData> TextLocationsList;
    
    WWEPLAYGROUNDS_API FWWEMovableStylizedTextsData();
};

