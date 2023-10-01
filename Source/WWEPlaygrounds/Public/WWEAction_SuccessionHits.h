#pragma once
#include "CoreMinimal.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_SuccessionHits.generated.h"

class AWWECharacterCombat;
class UWWEActionNode;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_SuccessionHits : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UWWEActionNode>> ActionsToApplyDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<AWWECharacterCombat*> Receivers;
    
public:
    UWWEAction_SuccessionHits();
};

