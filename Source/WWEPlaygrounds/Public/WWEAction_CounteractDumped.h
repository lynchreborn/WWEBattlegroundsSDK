#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EWWEDirection.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_CounteractDumped.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_CounteractDumped : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bBlockActionByTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandleCanStartAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEDirection RingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsFaceUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToBlockAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceToRival;
    
public:
    UWWEAction_CounteractDumped();
protected:
    UFUNCTION(BlueprintCallable)
    void ResetBlockActionByTime();
    
};

