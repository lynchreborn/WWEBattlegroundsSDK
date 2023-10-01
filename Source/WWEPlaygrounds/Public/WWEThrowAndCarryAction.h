#pragma once
#include "CoreMinimal.h"
#include "WWEAnimationVariation.h"
#include "WWEThrowAndCarryAction.generated.h"

UCLASS(Blueprintable)
class UWWEThrowAndCarryAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSpecial;
    
    UWWEThrowAndCarryAction();
};

