#pragma once
#include "CoreMinimal.h"
#include "EWWEAIChance.h"
#include "EWWECharacterState.h"
#include "WWEBTDecorator_AbortBase.h"
#include "WWEBTDecorator_React.generated.h"

class AWWECharacterCombat;
class UWWEActionNode;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEBTDecorator_React : public UWWEBTDecorator_AbortBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UWWEActionNode>> ActionsToReact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UWWEActionNode>> SelfActionsToCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWWECharacterState> SelfStatesToCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEAIChance ProbabilityConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bReactionAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* RelevantCharacter;
    
public:
    UWWEBTDecorator_React();
private:
    UFUNCTION(BlueprintCallable)
    void OnActionBegin(UWWEActionNode* ActionNode);
    
};

