#pragma once
#include "CoreMinimal.h"
#include "ESBMatchMode.h"
#include "WWECampaignNode.h"
#include "WWECampaignNodeEvent.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWECampaignNodeEvent : public UWWECampaignNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBMatchMode MatchMode;
    
    UWWECampaignNodeEvent();
};

