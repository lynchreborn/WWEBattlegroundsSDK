#pragma once
#include "CoreMinimal.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_HitBase.generated.h"

UCLASS(Abstract, Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_HitBase : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStrongHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeBlocked;
    
public:
    UWWEAction_HitBase();
};

