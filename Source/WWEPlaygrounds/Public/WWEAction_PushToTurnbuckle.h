#pragma once
#include "CoreMinimal.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_PushToTurnbuckle.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_PushToTurnbuckle : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceToTurnbuckle;
    
public:
    UWWEAction_PushToTurnbuckle();
};

