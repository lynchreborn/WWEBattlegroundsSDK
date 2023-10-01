#pragma once
#include "CoreMinimal.h"
#include "EWWERotateMode.h"
#include "EWWERotateSpeed.h"
#include "WWERotateParams.generated.h"

USTRUCT(BlueprintType)
struct FWWERotateParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWERotateMode RotateMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWERotateSpeed RotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotateWithAnim;
    
    WWEPLAYGROUNDS_API FWWERotateParams();
};

