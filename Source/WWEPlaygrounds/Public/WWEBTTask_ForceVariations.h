#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EWWECharacterAction.h"
#include "WWEBTTask_ForceVariations.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEBTTask_ForceVariations : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWWECharacterAction, TSoftObjectPtr<UAnimSequenceBase>> ForcedVariations;
    
public:
    UWWEBTTask_ForceVariations();
};

