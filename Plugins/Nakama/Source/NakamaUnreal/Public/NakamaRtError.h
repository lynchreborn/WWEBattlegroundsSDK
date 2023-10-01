#pragma once
#include "CoreMinimal.h"
#include "ENakamaRtErrorCode.h"
#include "NakamaRtError.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaRtError {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENakamaRtErrorCode Code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> Context;
    
    FNakamaRtError();
};

