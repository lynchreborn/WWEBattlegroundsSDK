#pragma once
#include "CoreMinimal.h"
#include "PGSyncLobbyConfiguration.h"
#include "WWECharacterParameterNamedFilter.h"
#include "WWESyncLobbyConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FWWESyncLobbyConfiguration : public FPGSyncLobbyConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWECharacterParameterNamedFilter> AvailableFilters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bBlockCancelCharacterSelectionStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bAllowRepeatedCharacters;
    
    WWEPLAYGROUNDS_API FWWESyncLobbyConfiguration();
};

