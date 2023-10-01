#pragma once
#include "CoreMinimal.h"
#include "EWWEDirection.h"
#include "WWEAction_HitBase.h"
#include "WWEAction_CageHit.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_CageHit : public UWWEAction_HitBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWWEDirection DirectionToHit;
    
public:
    UWWEAction_CageHit();
};

