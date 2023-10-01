#pragma once
#include "CoreMinimal.h"
#include "EPGMatchmakingPlayerType.h"
#include "PGMatchmakingPlayerTypeConfig.generated.h"

USTRUCT(BlueprintType)
struct FPGMatchmakingPlayerTypeConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPGMatchmakingPlayerType PlayerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    PLAYGROUNDSGAME_API FPGMatchmakingPlayerTypeConfig();
};

