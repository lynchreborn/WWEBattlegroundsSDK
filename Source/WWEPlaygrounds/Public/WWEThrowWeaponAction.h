#pragma once
#include "CoreMinimal.h"
#include "EWWETypeObjects.h"
#include "WWEAnimationVariation.h"
#include "WWEThrowWeaponAction.generated.h"

UCLASS(Blueprintable)
class UWWEThrowWeaponAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWETypeObjects WeaponObjectType;
    
    UWWEThrowWeaponAction();
};

