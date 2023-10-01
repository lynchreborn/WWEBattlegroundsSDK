#pragma once
#include "CoreMinimal.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_CageReceiveHit.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_CageReceiveHit : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWantToDump;
    
public:
    UWWEAction_CageReceiveHit();
};

