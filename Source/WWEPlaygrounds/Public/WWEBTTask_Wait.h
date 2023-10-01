#pragma once
#include "CoreMinimal.h"
#include "EWWEAITime.h"
#include "WWEBTTask.h"
#include "WWEBTTask_Wait.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEBTTask_Wait : public UWWEBTTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEAITime TimeConfig;
    
    UWWEBTTask_Wait();
};

