#pragma once
#include "CoreMinimal.h"
#include "WWEPlayerRewardsPoints.h"
#include "WWEPlayerRewardsPointsKOTR.generated.h"

class UWWEPlayerRewardsPointsRow;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEPlayerRewardsPointsKOTR : public UWWEPlayerRewardsPoints {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEPlayerRewardsPointsRow* ResistedTimeRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEPlayerRewardsPointsRow* OpponentsKickOutRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEPlayerRewardsPointsRow* FameObjectivesRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEPlayerRewardsPointsRow* AttackScoreRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEPlayerRewardsPointsRow* DefenseScoreRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEPlayerRewardsPointsRow* FinalResultsRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEPlayerRewardsPointsRow* TotalRow;
    
public:
    UWWEPlayerRewardsPointsKOTR();
};

