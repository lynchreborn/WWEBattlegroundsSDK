#pragma once
#include "CoreMinimal.h"
#include "PGArenaItemParameters.h"
#include "EItemBloodline.h"
#include "EWWEArenaSectionType.h"
#include "Templates/SubclassOf.h"
#include "WWEArenaOutfitEntry.h"
#include "WWERewardableInterface.h"
#include "WWEArenaItemParameters.generated.h"

class AWWEInteractableWeapon;
class UPGArenaEditActionBase;
class UTexture2D;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEArenaItemParameters : public UPGArenaItemParameters, public IWWERewardableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemBloodline> Bloodlines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEArenaOutfitEntry> ArenaItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWWEInteractableWeapon> InteractableWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPGArenaEditActionBase> ArenaEditAction;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEArenaSectionType ArenaSectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ArenaItemWidgetImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* CachedArenaItemWidgetImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnlockedOnCampaign;
    
public:
    UWWEArenaItemParameters();
    UFUNCTION(BlueprintCallable)
    EWWEArenaSectionType GetArenaSection() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

