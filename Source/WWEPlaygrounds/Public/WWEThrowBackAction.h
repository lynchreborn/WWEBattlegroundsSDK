#pragma once
#include "CoreMinimal.h"
#include "WWEAnimationVariation.h"
#include "WWEThrowBackAction.generated.h"

UCLASS(Blueprintable)
class UWWEThrowBackAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMidSocketRotation;
    
    UWWEThrowBackAction();
};

