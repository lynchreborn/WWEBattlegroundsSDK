#pragma once
#include "CoreMinimal.h"
#include "PGCharacterWithConfig.h"
#include "PGSyncPlayerSlotSettings.h"
#include "WWESyncPlayerSlotSettings.generated.h"

USTRUCT(BlueprintType)
struct FWWESyncPlayerSlotSettings : public FPGSyncPlayerSlotSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bUseOverridenCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bUseOverridenCharacterItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPGCharacterWithConfig> OverridenAvailableCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 CustomCharacterCharacterSlotId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FString CustomCharacterConfigSlotId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 UserPrestige;
    
    WWEPLAYGROUNDS_API FWWESyncPlayerSlotSettings();
};

