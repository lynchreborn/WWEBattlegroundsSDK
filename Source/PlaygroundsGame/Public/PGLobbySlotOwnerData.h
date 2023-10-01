#pragma once
#include "CoreMinimal.h"
#include "EPGLobbyAiType.h"
#include "PGLobbySlotOwnerData.generated.h"

USTRUCT(BlueprintType)
struct FPGLobbySlotOwnerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPGLobbyAiType AiType;
    
    PLAYGROUNDSGAME_API FPGLobbySlotOwnerData();
};

