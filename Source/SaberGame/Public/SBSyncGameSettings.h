#pragma once
#include "CoreMinimal.h"
#include "ESBCompetitionMode.h"
#include "ESBMatchMode.h"
#include "SBSyncGameSettings.generated.h"

USTRUCT(BlueprintType)
struct FSBSyncGameSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CharsPerTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TeamsAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBCompetitionMode CompetitionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBMatchMode MatchMode;
    
    SABERGAME_API FSBSyncGameSettings();
};

