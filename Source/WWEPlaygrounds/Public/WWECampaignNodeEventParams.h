#pragma once
#include "CoreMinimal.h"
#include "ESBMatchMode.h"
#include "Templates/SubclassOf.h"
#include "WWECampaignNodeParameters.h"
#include "WWEMatchConfig.h"
#include "WWEOpponentWrestlerData.h"
#include "WWECampaignNodeEventParams.generated.h"

class UPGCharacterParameters;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWECampaignNodeEventParams : public UWWECampaignNodeParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRoadToGlory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBMatchMode MatchMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UPGCharacterParameters>> AvailableWrestlers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEOpponentWrestlerData> NewAlliesWrestlers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEOpponentWrestlerData> NewOpponentWrestlers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PlaygroundIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VariableEndingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEMatchConfig MatchConfiguration;
    
    UWWECampaignNodeEventParams();
};

