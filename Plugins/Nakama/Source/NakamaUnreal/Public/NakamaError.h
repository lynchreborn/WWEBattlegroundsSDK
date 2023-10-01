#pragma once
#include "CoreMinimal.h"
#include "ENakamaErrorCode.h"
#include "NakamaError.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaError {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENakamaErrorCode Code;
    
    FNakamaError();
};

