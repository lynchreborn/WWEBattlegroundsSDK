#pragma once
#include "CoreMinimal.h"
#include "WWEAnimationVariation.h"
#include "WWETauntAction.generated.h"

UCLASS(Blueprintable)
class UWWETauntAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnTurnbuckle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllRounderCharismaLock;
    
    UWWETauntAction();
};

