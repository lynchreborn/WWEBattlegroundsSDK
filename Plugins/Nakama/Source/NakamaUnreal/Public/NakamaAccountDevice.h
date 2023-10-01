#pragma once
#include "CoreMinimal.h"
#include "NakamaAccountDevice.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaAccountDevice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> Vars;
    
    FNakamaAccountDevice();
};

