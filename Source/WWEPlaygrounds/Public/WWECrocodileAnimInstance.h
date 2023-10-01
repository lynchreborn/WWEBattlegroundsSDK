#pragma once
#include "CoreMinimal.h"
#include "SBAnimInstance.h"
#include "WWECrocodileAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WWEPLAYGROUNDS_API UWWECrocodileAnimInstance : public USBAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeInitialPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float RandStartPosition;
    
public:
    UWWECrocodileAnimInstance();
};

