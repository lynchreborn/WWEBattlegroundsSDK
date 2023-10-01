#pragma once
#include "CoreMinimal.h"
#include "EWWECampaignNodeStatus.h"
#include "WWESaveGameCampaignNodeInfo.generated.h"

USTRUCT(BlueprintType)
struct WWEPLAYGROUNDS_API FWWESaveGameCampaignNodeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWECampaignNodeStatus NodeStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LevelCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IntroComicID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EndComicID;
    
    FWWESaveGameCampaignNodeInfo();
};

