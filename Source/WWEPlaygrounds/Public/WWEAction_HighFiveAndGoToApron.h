#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WWEAction_ComplexBase.h"
#include "WWEAction_HighFiveAndGoToApron.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_HighFiveAndGoToApron : public UWWEAction_ComplexBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector FinalLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCompletedTransfer;
    
public:
    UWWEAction_HighFiveAndGoToApron();
};

