#pragma once
#include "CoreMinimal.h"
#include "WWEAction_ComplexBase.h"
#include "WWEAction_RotateAndGetOutOfApron.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_RotateAndGetOutOfApron : public UWWEAction_ComplexBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPretendGetOutOfApronToRing;
    
public:
    UWWEAction_RotateAndGetOutOfApron();
};

