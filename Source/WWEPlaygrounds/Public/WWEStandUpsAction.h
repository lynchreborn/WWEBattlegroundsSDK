#pragma once
#include "CoreMinimal.h"
#include "WWEAnimationVariation.h"
#include "WWEStandUpsAction.generated.h"

UCLASS(Blueprintable)
class UWWEStandUpsAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFaceUp;
    
    UWWEStandUpsAction();
};

