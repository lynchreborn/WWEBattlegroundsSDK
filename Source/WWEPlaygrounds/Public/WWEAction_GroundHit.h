#pragma once
#include "CoreMinimal.h"
#include "EWWEDirection.h"
#include "WWEAction_HitBase.h"
#include "WWEAction_GroundHit.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_GroundHit : public UWWEAction_HitBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FName GroundHitBoneNameToAdjustLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEDirection DirectionTakingIntoAccountRivalSeenFromAbove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bDumpedBySpecialKick;
    
public:
    UWWEAction_GroundHit();
};

