#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EWWECampaignNodeStatus.h"
#include "WWECampaignNode.generated.h"

class UWWECampaignNode;
class UWWECampaignNodeParameters;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWECampaignNode : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWECampaignNodeStatus NodeStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCampaignNode;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWWECampaignNodeParameters* Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWWECampaignNode* PreviousNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWWECampaignNode*> NextNodes;
    
    UWWECampaignNode();
};

