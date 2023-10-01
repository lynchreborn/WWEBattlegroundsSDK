#pragma once
#include "CoreMinimal.h"
#include "EWWEAutoMoveKeyLocation.h"
#include "WWEAutoMoveParameters.generated.h"

USTRUCT(BlueprintType)
struct FWWEAutoMoveParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEAutoMoveKeyLocation Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSprint;
    
    WWEPLAYGROUNDS_API FWWEAutoMoveParameters();
};

