#pragma once
#include "CoreMinimal.h"
#include "WWECampaignNodeParameters.h"
#include "WWECampaignNodeCityParams.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWECampaignNodeCityParams : public UWWECampaignNodeParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CityName;
    
    UWWECampaignNodeCityParams();
};

