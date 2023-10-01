#pragma once
#include "CoreMinimal.h"
#include "PGCharacterWithConfig.generated.h"

USTRUCT(BlueprintType)
struct FPGCharacterWithConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FString CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> CharacterItems;
    
    PLAYGROUNDSGAME_API FPGCharacterWithConfig();
};

