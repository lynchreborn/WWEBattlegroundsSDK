#pragma once
#include "CoreMinimal.h"
#include "WWEAnimationVariation.h"
#include "WWEPullFromTurnbuckleAction.generated.h"

UCLASS(Blueprintable)
class UWWEPullFromTurnbuckleAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFaceToRing;
    
    UWWEPullFromTurnbuckleAction();
};

