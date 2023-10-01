#pragma once
#include "CoreMinimal.h"
#include "PGSanitizePlayerNameRequest.generated.h"

class APGPlayerState;

USTRUCT(BlueprintType)
struct FPGSanitizePlayerNameRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APGPlayerState* PlayerStateLobby;
    
    PLAYGROUNDSGAME_API FPGSanitizePlayerNameRequest();
};

