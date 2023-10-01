#pragma once
#include "CoreMinimal.h"
#include "EWWEMoneyBagLocation.h"
#include "EWWEObjectAligment.h"
#include "EWWETypeObjects.h"
#include "WWEAnimationVariation.h"
#include "WWEPickUpAction.generated.h"

UCLASS(Blueprintable)
class UWWEPickUpAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWETypeObjects WeaponObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWWEObjectAligment> WeaponAligments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEMoneyBagLocation MoneyBagLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFailVariation;
    
    UWWEPickUpAction();
};

