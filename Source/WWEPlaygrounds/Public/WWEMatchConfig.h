#pragma once
#include "CoreMinimal.h"
#include "ESBMatchMode.h"
#include "Templates/SubclassOf.h"
#include "WWEFatal4WayMatchConfig.h"
#include "WWEGauntletMatchConfig.h"
#include "WWEKingOfTheRingMatchConfig.h"
#include "WWEOnevsOneMatchConfig.h"
#include "WWERoyalRumbleMatchConfig.h"
#include "WWESteelCage1vs1MatchConfig.h"
#include "WWESteelCage2vs2MatchConfig.h"
#include "WWETagTeamMatchConfig.h"
#include "WWETornadoTagMatchConfig.h"
#include "WWETripleThreatMatchConfig.h"
#include "WWEMatchConfig.generated.h"

class UWWEAIConfig;

USTRUCT(BlueprintType)
struct FWWEMatchConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBMatchMode DisplayedMatchMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEAIConfig> AIDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOverridenOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEOnevsOneMatchConfig OnevsOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWETagTeamMatchConfig TagTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWETornadoTagMatchConfig TornadoTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWETripleThreatMatchConfig TripleThreath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEFatal4WayMatchConfig Fatal4Way;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWERoyalRumbleMatchConfig RoyalRumble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEKingOfTheRingMatchConfig KingOfTheRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWESteelCage1vs1MatchConfig Cage1vs1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWESteelCage2vs2MatchConfig Cage2vs2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEGauntletMatchConfig Gauntlet;
    
    WWEPLAYGROUNDS_API FWWEMatchConfig();
};

