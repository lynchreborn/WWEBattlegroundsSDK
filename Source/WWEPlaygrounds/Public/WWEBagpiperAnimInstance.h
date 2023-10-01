#pragma once
#include "CoreMinimal.h"
#include "SBAnimInstance.h"
#include "WWEBagpiperAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WWEPLAYGROUNDS_API UWWEBagpiperAnimInstance : public USBAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayingBagpipe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAwake;
    
    UWWEBagpiperAnimInstance();
};

