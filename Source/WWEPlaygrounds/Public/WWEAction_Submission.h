#pragma once
#include "CoreMinimal.h"
#include "EWWEDirection.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_Submission.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_Submission : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWWEDirection CurrentDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 VariationSubmission;
    
public:
    UWWEAction_Submission();
};

