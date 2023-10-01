#pragma once
#include "CoreMinimal.h"
#include "EWWEDirection.h"
#include "EWWEInterestFactor.h"
#include "WWEAnimationVariation.h"
#include "WWESubmissionAction.generated.h"

UCLASS(Blueprintable)
class UWWESubmissionAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEDirection DirectionTakingIntoAccountCharacterDumped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFaceUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEInterestFactor InterestDone;
    
    UWWESubmissionAction();
};

