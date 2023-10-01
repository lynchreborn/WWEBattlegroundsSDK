#pragma once
#include "CoreMinimal.h"
#include "PGLobbyConfiguration.h"
#include "WWECharacterParameterNamedFilter.h"
#include "WWELobbyConfiguration.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWELobbyConfiguration : public UPGLobbyConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWECharacterParameterNamedFilter> AvailableFilters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bBlockCancelCharacterSelectionStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bAllowRepeatedCharacters;
    
    UWWELobbyConfiguration();
};

