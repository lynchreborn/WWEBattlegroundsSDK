#pragma once
#include "CoreMinimal.h"
#include "EWWECombinationList.h"
#include "WWEAction_HitBase.h"
#include "WWEAction_ChargeHit.generated.h"

class UWWEActionNode;
class UWWECommentSettings;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_ChargeHit : public UWWEAction_HitBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UWWEActionNode>> ActionsToApplyDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWWECommentSettings> SpecialCommentSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWECombinationList CombinationMode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRivalDumpedAndClose;
    
public:
    UWWEAction_ChargeHit();
};

