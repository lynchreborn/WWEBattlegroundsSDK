#pragma once
#include "CoreMinimal.h"
#include "PGMinMaxFloat.generated.h"

USTRUCT(BlueprintType)
struct PLAYGROUNDSGAME_API FPGMinMaxFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    FPGMinMaxFloat();
};

