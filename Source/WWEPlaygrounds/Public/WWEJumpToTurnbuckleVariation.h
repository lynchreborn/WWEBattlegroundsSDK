#pragma once
#include "CoreMinimal.h"
#include "WWEAnimationVariation.h"
#include "WWEJumpToTurnbuckleVariation.generated.h"

UCLASS(Blueprintable)
class UWWEJumpToTurnbuckleVariation : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFaceTurnbuckle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UWWEJumpToTurnbuckleVariation();
};

