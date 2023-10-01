#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EWWEActionNodeResult.h"
#include "WWEActionExecuterInterface.h"
#include "WWEActionNode.h"
#include "WWEComplexActionList.h"
#include "WWEAction_ComplexBase.generated.h"

class USoundCue;

UCLASS(Abstract, Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_ComplexBase : public UWWEActionNode, public IWWEActionExecuterInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PreselectedVariationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentActionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PreviousActionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ForcedNextActionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWWEActionNodeResult ForcedClientResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle EndComplexActionHandle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UWWEActionNode* CurrentAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UWWEActionNode* PreviousAction;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEComplexActionList> ActionClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* SignatureComment;
    
public:
    UWWEAction_ComplexBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetForcedNextActionIndex(int32 Index);
    
    
    // Fix for true pure virtual functions not being implemented
};

