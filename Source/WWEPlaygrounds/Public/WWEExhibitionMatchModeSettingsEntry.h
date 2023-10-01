#pragma once
#include "CoreMinimal.h"
#include "ESBMatchMode.h"
#include "WWEGameplayInitialSettings.h"
#include "WWEExhibitionMatchModeSettingsEntry.generated.h"

USTRUCT(BlueprintType)
struct FWWEExhibitionMatchModeSettingsEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBMatchMode MatchModeEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEGameplayInitialSettings GameplaySettingsEntry;
    
    WWEPLAYGROUNDS_API FWWEExhibitionMatchModeSettingsEntry();
};

