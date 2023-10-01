#pragma once
#include "CoreMinimal.h"
#include "PGLobbySlotConfig.h"
#include "EWWELobbySlotPosition.h"
#include "WWELobbySlotConfig.generated.h"

USTRUCT(BlueprintType)
struct FWWELobbySlotConfig : public FPGLobbySlotConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    bool bConfirmed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    int32 FilterSelected;
    
    UPROPERTY(EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    EWWELobbySlotPosition LobbySlotPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    int32 CustomCharacterSlotId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    FString CustomCharacterConfigId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    int32 Prestige;
    
    WWEPLAYGROUNDS_API FWWELobbySlotConfig();
};

