#pragma once
#include "CoreMinimal.h"
#include "EWWEDirection.h"
#include "WWEDistanceAnimationVariation.h"
#include "WWEReleaseFromReceiveCarryByCharacter.generated.h"

UCLASS(Blueprintable)
class UWWEReleaseFromReceiveCarryByCharacter : public UWWEDistanceAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEDirection Side;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpecialCarry;
    
    UWWEReleaseFromReceiveCarryByCharacter();
};

