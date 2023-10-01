#pragma once
#include "CoreMinimal.h"
#include "SBAnimInstance.h"
#include "WWEBagpipesWeaponAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WWEPLAYGROUNDS_API UWWEBagpipesWeaponAnimInstance : public USBAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPicked;
    
    UWWEBagpipesWeaponAnimInstance();
};

