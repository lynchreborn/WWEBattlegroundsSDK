#pragma once
#include "CoreMinimal.h"
#include "WWEPowerUpPerTimeParameters.h"
#include "WWESpecialActionVariationParams.generated.h"

class UWWEActionNode;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWESpecialActionVariationParams : public UWWEPowerUpPerTimeParameters {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UWWEActionNode>> ActionClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BasicDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SilverDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GoldDamageMultiplier;
    
public:
    UWWESpecialActionVariationParams();
};

