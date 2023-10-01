#pragma once
#include "CoreMinimal.h"
#include "PGHardCurrencyBunchEntry.generated.h"

class UPGHardCurrencyBunchParameters;

USTRUCT(BlueprintType)
struct FPGHardCurrencyBunchEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPGHardCurrencyBunchParameters> HardCurrencyBunchParamsClass;
    
    PLAYGROUNDSGAME_API FPGHardCurrencyBunchEntry();
};

