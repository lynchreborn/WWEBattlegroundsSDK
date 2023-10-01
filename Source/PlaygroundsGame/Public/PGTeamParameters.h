#pragma once
#include "CoreMinimal.h"
#include "SBItemAssetLoader.h"
#include "PGTeamParameters.generated.h"

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API UPGTeamParameters : public USBItemAssetLoader {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HistoricalPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OfficialTeam;
    
    UPGTeamParameters();
};

