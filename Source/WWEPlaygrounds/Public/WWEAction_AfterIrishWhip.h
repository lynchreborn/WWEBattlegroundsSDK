#pragma once
#include "CoreMinimal.h"
#include "EWWEActionHeight.h"
#include "EWWECombinationList.h"
#include "EWWEDirection.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_AfterIrishWhip.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_AfterIrishWhip : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToPerform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float DistanceToRival;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bAfterIrishRequested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEDirection Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEActionHeight ComboHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWECombinationList CombinationMode;
    
public:
    UWWEAction_AfterIrishWhip();
};

