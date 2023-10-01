#pragma once
#include "CoreMinimal.h"
#include "WWEAnimationVariation.h"
#include "WWECageEscapeToWinAction.generated.h"

UCLASS(Blueprintable)
class UWWECageEscapeToWinAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRight;
    
    UWWECageEscapeToWinAction();
};

