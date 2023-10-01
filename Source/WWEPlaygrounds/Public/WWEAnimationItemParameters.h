#pragma once
#include "CoreMinimal.h"
#include "SBItemParameters.h"
#include "EItemBloodline.h"
#include "EWWEAnimationItemType.h"
#include "WWERewardableInterface.h"
#include "WWEAnimationItemParameters.generated.h"

class USBVideoItemData;
class UTexture2D;
class UWWEActionNode;
class UWWEAnimationVariation;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAnimationItemParameters : public USBItemParameters, public IWWERewardableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemBloodline> Bloodlines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FightingStyles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWWEActionNode> SignatureMoveClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ItemWidgetImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* CachedItemWidgetImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWWEAnimationVariation* Variation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEAnimationItemType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBVideoItemData* VideoItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnlockedOnCampaign;
    
public:
    UWWEAnimationItemParameters();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWWEAnimationItemType GetItemType() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

