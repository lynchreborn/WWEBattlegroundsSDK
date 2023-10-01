#pragma once
#include "CoreMinimal.h"
#include "WWEAnimationVariation.h"
#include "WWEUpTurnbuckleFromApronAction.generated.h"

UCLASS(Blueprintable)
class UWWEUpTurnbuckleFromApronAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFaceRing;
    
    UWWEUpTurnbuckleFromApronAction();
};

