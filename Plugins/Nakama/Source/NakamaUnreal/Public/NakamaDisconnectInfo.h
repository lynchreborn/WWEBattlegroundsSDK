#pragma once
#include "CoreMinimal.h"
#include "NakamaDisconnectInfo.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaDisconnectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Reason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Remote;
    
    FNakamaDisconnectInfo();
};

