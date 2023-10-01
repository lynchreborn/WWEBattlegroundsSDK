#pragma once
#include "CoreMinimal.h"
#include "NakamaPartyClose.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaPartyClose {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    FNakamaPartyClose();
};

