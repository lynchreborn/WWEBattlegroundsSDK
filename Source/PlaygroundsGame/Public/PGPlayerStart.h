#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "ESBTeam.h"
#include "PGPlayerStart.generated.h"

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API APGPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBTeam TeamOwner;
    
    APGPlayerStart();
};

