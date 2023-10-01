#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_FindWeaponUnderRing.generated.h"

class AWWEInteractableWeapon;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_FindWeaponUnderRing : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWEInteractableWeapon* WeaponToPick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FCollisionResponseContainer WeaponCollisions;
    
public:
    UWWEAction_FindWeaponUnderRing();
};

