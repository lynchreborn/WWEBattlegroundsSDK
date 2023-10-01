#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPGMatchDifficultyConfigs.h"
#include "PGSeasonManager.generated.h"

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API UPGSeasonManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SeasonIdInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TempSeasonId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString TempTeamForSeason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPGMatchDifficultyConfigs TempDifficulty;
    
public:
    UPGSeasonManager();
};

