#pragma once
#include "CoreMinimal.h"
#include "NakamaStream.h"
#include "NakamaUserPresence.h"
#include "NakamaStreamData.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaStreamData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNakamaStream Stream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNakamaUserPresence Sender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Data;
    
    FNakamaStreamData();
};

