#pragma once
#include "CoreMinimal.h"
#include "NakamaRPC.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaRPC {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Payload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HttpKey;
    
    FNakamaRPC();
};

