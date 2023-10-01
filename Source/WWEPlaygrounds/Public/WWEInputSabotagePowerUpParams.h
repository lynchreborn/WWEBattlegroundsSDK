#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WWEGoldInputSabotageTimeLevelStats.h"
#include "WWEPowerUpPerTimeParameters.h"
#include "WWESilverInputSabotageTimeLevelStats.h"
#include "WWEInputSabotagePowerUpParams.generated.h"

class UWWEActionNode;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEInputSabotagePowerUpParams : public UWWEPowerUpPerTimeParameters {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SabotageFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWESilverInputSabotageTimeLevelStats SilverParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEGoldInputSabotageTimeLevelStats GoldParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEActionNode> BindedAction;
    
public:
    UWWEInputSabotagePowerUpParams();
};

