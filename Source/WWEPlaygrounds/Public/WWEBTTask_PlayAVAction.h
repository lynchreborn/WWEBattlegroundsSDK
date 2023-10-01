#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EWWEActionTypes.h"
#include "EWWEDirection.h"
#include "EWWEGrabBodyPart.h"
#include "EWWEInputAction.h"
#include "WWEBTTask_PlayAVAction.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEBTTask_PlayAVAction : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEInputAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEActionTypes ThrowType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEGrabBodyPart StartBodyPartGrabbed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEDirection ActionDirection;
    
public:
    UWWEBTTask_PlayAVAction();
};

