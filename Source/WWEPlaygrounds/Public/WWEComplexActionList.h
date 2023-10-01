#pragma once
#include "CoreMinimal.h"
#include "EWWEActionNodeResult.h"
#include "EWWECombinationList.h"
#include "EWWEInputAction.h"
#include "WWEAutoMoveParams.h"
#include "WWERotateParams.h"
#include "WWEComplexActionList.generated.h"

class UWWEActionNode;
class UWWEAnimationVariation;

USTRUCT(BlueprintType)
struct FWWEComplexActionList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWWEActionNode> Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEInputAction Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWECombinationList CombinationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWERotateParams RotateParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEAutoMoveParams AutoMoveParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSignatureMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWWEAnimationVariation*> SignatureVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWWEActionNodeResult, int32> NextActions;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWWEAnimationVariation* ForcedVariation;
    
    WWEPLAYGROUNDS_API FWWEComplexActionList();
};

