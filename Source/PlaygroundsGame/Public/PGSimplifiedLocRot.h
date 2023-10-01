#pragma once
#include "CoreMinimal.h"
#include "PGSimplifiedLocRot.generated.h"

USTRUCT(BlueprintType)
struct FPGSimplifiedLocRot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Yaw;
    
    PLAYGROUNDSGAME_API FPGSimplifiedLocRot();
};

