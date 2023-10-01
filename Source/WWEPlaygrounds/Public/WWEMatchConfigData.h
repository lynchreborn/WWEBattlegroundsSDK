#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESBMatchMode.h"
#include "EWWEMatchMenuOptions.h"
#include "WWEConfigSubOptions.h"
#include "WWEDificultyOptions.h"
#include "WWEOptionsMenuRule.h"
#include "WWEMatchConfigData.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEMatchConfigData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEConfigSubOptions> MatchRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEConfigSubOptions> MatchConfigOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEDificultyOptions MatchDifficulties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESBMatchMode> MatchToConfigure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWWEMatchMenuOptions, FWWEOptionsMenuRule> OptionRules;
    
public:
    UWWEMatchConfigData();
};

