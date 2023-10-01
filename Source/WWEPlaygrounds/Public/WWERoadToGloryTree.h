#pragma once
#include "CoreMinimal.h"
#include "WWERoadToGloryTree.generated.h"

class UWWECampaignNode;

USTRUCT(BlueprintType)
struct FWWERoadToGloryTree {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CustomCharID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentNodeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWWECampaignNode*> RoadToGloryNodesList;
    
    WWEPLAYGROUNDS_API FWWERoadToGloryTree();
};

