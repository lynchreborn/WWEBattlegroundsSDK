#pragma once
#include "CoreMinimal.h"
#include "WWEAnimationVariation.h"
#include "WWESwitchCageTopAction.generated.h"

UCLASS(Blueprintable)
class UWWESwitchCageTopAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRight;
    
    UWWESwitchCageTopAction();
};

