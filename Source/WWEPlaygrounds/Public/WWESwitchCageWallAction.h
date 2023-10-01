#pragma once
#include "CoreMinimal.h"
#include "WWEAnimationVariation.h"
#include "WWESwitchCageWallAction.generated.h"

UCLASS(Blueprintable)
class UWWESwitchCageWallAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRight;
    
    UWWESwitchCageWallAction();
};

