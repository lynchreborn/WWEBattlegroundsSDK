#pragma once
#include "CoreMinimal.h"
#include "EPGCharacterBody.h"
#include "PGVanityItemParameters.h"
#include "EItemBloodline.h"
#include "EWWEBodyPartsOccupy.h"
#include "EWWEGender.h"
#include "EWWEHeadType.h"
#include "EWWEItemCategory.h"
#include "EWWEVanityItemType.h"
#include "Templates/SubclassOf.h"
#include "WWERewardableInterface.h"
#include "WWEVanityItemAssets.h"
#include "WWEVanityItemAvailableMaterials.h"
#include "WWEVanityItemParameters.generated.h"

class UTexture2D;
class UWWEItemHeadMeshConfig;
class UWWEItemSuperstarMeshConfig;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEVanityItemParameters : public UPGVanityItemParameters, public IWWERewardableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemBloodline> Bloodlines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemCategoryPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SkinItemIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldEnablePhysics;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEGender Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEVanityItemType VanityItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCastShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEItemHeadMeshConfig> MeshHeadConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEItemSuperstarMeshConfig> MeshSuperstarConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowsMaterialSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEVanityItemAvailableMaterials> MaterialsInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RelatedSkinItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LinkedCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> PortraitImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* PortraitImageTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> PortraitImageBig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* PortraitImageBigTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ResultScreenImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* ResultScreenImageTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWWEBodyPartsOccupy> BodyPartsOcuppied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> VanityItemWidgetImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* CachedVanityItemWidgetImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UnlockConditionDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnlockedOnCampaign;
    
public:
    UWWEVanityItemParameters();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWWEVanityItemType GetVanityItemType() const;
    
    UFUNCTION(BlueprintCallable)
    FText GetUnlockConditionDesc();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumMaterialsInstance() const;
    
    UFUNCTION(BlueprintCallable)
    EWWEGender GetGender() const;
    
    UFUNCTION(BlueprintCallable)
    FWWEVanityItemAssets GetAssets(EPGCharacterBody Body, EWWEHeadType HeadType, int32 SelectedVanityMaterialIdx) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetAllowsMaterialSelection() const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckItemCategoryPath(EWWEItemCategory ItemCategory);
    
    
    // Fix for true pure virtual functions not being implemented
};

