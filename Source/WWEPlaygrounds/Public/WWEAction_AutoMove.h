#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EWWEActionNodeResult.h"
#include "EWWEAutoMoveMode.h"
#include "WWEActionNode.h"
#include "WWEAction_AutoMove.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_AutoMove : public UWWEActionNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEAutoMoveMode AutoMoveMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateTargetOnTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FVector LocationToMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bAbortByRingTriggerEnabled;
    
public:
    UWWEAction_AutoMove();
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStopAutoMove(EWWEActionNodeResult Result);
    
};

