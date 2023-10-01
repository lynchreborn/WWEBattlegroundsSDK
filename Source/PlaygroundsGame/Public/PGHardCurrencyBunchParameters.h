#pragma once
#include "CoreMinimal.h"
#include "SBItemParameters.h"
#include "PGHardCurrencyBunchParameters.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API UPGHardCurrencyBunchParameters : public USBItemParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfTokensBeingSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetAmountOfTokensRandomly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumAmountOfTokensForRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumAmountOfTokensForRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> CardTexture;
    
    UPGHardCurrencyBunchParameters();
};

