#pragma once
#include "CoreMinimal.h"
#include "WWEPlayerRewardsPoints.h"
#include "WWEPlayerRewardsPointsCommon.generated.h"

class UWWEPlayerRewardsPointsRow;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEPlayerRewardsPointsCommon : public UWWEPlayerRewardsPoints {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEPlayerRewardsPointsRow* FinalResultsRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEPlayerRewardsPointsRow* AttackCombatRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEPlayerRewardsPointsRow* DefenseCombatRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEPlayerRewardsPointsRow* TotalRow;
    
public:
    UWWEPlayerRewardsPointsCommon();
};

