#pragma once
#include "CoreMinimal.h"
#include "SBSoftAttachableFX.h"
#include "EWWECombinationList.h"
#include "WWEImpactFX.generated.h"

class UWWEActionNode;

USTRUCT(BlueprintType)
struct FWWEImpactFX {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWWEActionNode> ActionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseImpactPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBSoftAttachableFX> FXArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWECombinationList Combination;
    
    WWEPLAYGROUNDS_API FWWEImpactFX();
};

