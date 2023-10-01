#pragma once
#include "CoreMinimal.h"
#include "PGCharacterEntry.generated.h"

class UPGCharacterParameters;

USTRUCT(BlueprintType)
struct PLAYGROUNDSGAME_API FPGCharacterEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPGCharacterParameters> CharacterParamsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CachedCharacterID;
    
    FPGCharacterEntry();
};

