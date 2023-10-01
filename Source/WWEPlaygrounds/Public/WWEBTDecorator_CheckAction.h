#pragma once
#include "CoreMinimal.h"
#include "WWEBTDecorator_AbortBase.h"
#include "WWEBTDecorator_CheckAction.generated.h"

class AWWECharacterCombat;
class UWWEActionNode;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEBTDecorator_CheckAction : public UWWEBTDecorator_AbortBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UWWEActionNode>> Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* RelevantCharacter;
    
public:
    UWWEBTDecorator_CheckAction();
private:
    UFUNCTION(BlueprintCallable)
    void OnActionBegin(UWWEActionNode* ActionNode);
    
};

