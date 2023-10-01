#pragma once
#include "CoreMinimal.h"
#include "WWECustomCharacterSavedInfo.generated.h"

USTRUCT(BlueprintType)
struct FWWECustomCharacterSavedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Overall;
    
    WWEPLAYGROUNDS_API FWWECustomCharacterSavedInfo();
};

