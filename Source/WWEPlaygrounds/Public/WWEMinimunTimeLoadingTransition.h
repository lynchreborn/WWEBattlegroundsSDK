#pragma once
#include "CoreMinimal.h"
#include "SBFadeTransition.h"
#include "WWEMinimunTimeLoadingTransition.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEMinimunTimeLoadingTransition : public USBFadeTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimunTimeToLoad;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTransitionInRequested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MinimunTimeTimer;
    
public:
    UWWEMinimunTimeLoadingTransition();
};

