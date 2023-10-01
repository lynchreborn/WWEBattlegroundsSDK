#pragma once
#include "CoreMinimal.h"
#include "WWEStaticWeapon.h"
#include "WWEMoneySack.generated.h"

class AWWEMoneySackSpawner;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEMoneySack : public AWWEStaticWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoneyAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHanging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWEMoneySackSpawner* Spawner;
    
public:
    AWWEMoneySack();
};

