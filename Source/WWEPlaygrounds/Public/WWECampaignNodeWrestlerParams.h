#pragma once
#include "CoreMinimal.h"
#include "WWECampaignNodeParameters.h"
#include "WWECampaignNodeWrestlerParams.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWECampaignNodeWrestlerParams : public UWWECampaignNodeParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> WrestlerIDs;
    
    UWWECampaignNodeWrestlerParams();
};

