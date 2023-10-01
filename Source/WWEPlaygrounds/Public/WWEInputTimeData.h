#pragma once
#include "CoreMinimal.h"
#include "EWWEInputAction.h"
#include "WWEInputTimeData.generated.h"

USTRUCT(BlueprintType)
struct FWWEInputTimeData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EWWEInputAction, float> StartedPressedInputTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EWWEInputAction, float> TotalPressedInputSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EWWEInputAction, bool> ActionReady;
    
public:
    WWEPLAYGROUNDS_API FWWEInputTimeData();
};

