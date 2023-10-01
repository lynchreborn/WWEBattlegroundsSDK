#pragma once
#include "CoreMinimal.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_PullFromApron.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_PullFromApron : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToRival;
    
public:
    UWWEAction_PullFromApron();
};

