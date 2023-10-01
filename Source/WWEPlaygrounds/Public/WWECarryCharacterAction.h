#pragma once
#include "CoreMinimal.h"
#include "WWEAnimationVariation.h"
#include "WWECarryCharacterAction.generated.h"

UCLASS(Blueprintable)
class UWWECarryCharacterAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFail;
    
    UWWECarryCharacterAction();
};

