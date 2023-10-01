#pragma once
#include "CoreMinimal.h"
#include "WWECampaignManager.h"
#include "WWERoadToGloryManager.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWERoadToGloryManager : public UWWECampaignManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentCustomWrestlerID;
    
    UWWERoadToGloryManager();
};

