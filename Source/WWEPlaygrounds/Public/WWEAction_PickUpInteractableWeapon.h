#pragma once
#include "CoreMinimal.h"
#include "EWWEObjectAligment.h"
#include "EWWETypeObjects.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_PickUpInteractableWeapon.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_PickUpInteractableWeapon : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWETypeObjects PrepareWeaponObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEObjectAligment PrepareWeaponAligment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bFailVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MoneyPickUpTimer;
    
public:
    UWWEAction_PickUpInteractableWeapon();
};

