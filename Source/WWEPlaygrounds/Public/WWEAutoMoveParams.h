#pragma once
#include "CoreMinimal.h"
#include "EWWEAutoMoveMode.h"
#include "WWEAutoMoveParams.generated.h"

USTRUCT(BlueprintType)
struct FWWEAutoMoveParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEAutoMoveMode RotateMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOrientateToMovement;
    
    WWEPLAYGROUNDS_API FWWEAutoMoveParams();
};

