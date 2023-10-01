#pragma once
#include "CoreMinimal.h"
#include "EWWEBodyPart.h"
#include "WWEAnimationVariation.h"
#include "WWEDumpsAction.generated.h"

UCLASS(Blueprintable)
class UWWEDumpsAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFaceUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFromChargeHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEBodyPart HarmedBodyPart;
    
    UWWEDumpsAction();
};

