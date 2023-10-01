#pragma once
#include "CoreMinimal.h"
#include "EPGCharacterBody.h"
#include "PGHeadItemParameters.h"
#include "EItemBloodline.h"
#include "EWWEGender.h"
#include "EWWEHeadType.h"
#include "Templates/SubclassOf.h"
#include "WWEHeadItemAssets.h"
#include "WWERewardableInterface.h"
#include "WWEHeadItemParameters.generated.h"

class UMaterialInstance;
class UPGItemBodyMeshConfig;
class UTexture2D;
class UWWEItemTextureConfig;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEHeadItemParameters : public UPGHeadItemParameters, public IWWERewardableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemBloodline> Bloodlines;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEGender Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEHeadType HeadType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultSkinColorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPGItemBodyMeshConfig> MeshConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEItemTextureConfig> TextureMapsConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInstance>> MaterialsInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> HeadItemWidgetImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* CachedHeadItemWidgetImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnlockedOnCampaign;
    
public:
    UWWEHeadItemParameters();
    UFUNCTION(BlueprintCallable)
    EWWEHeadType GetHeadType() const;
    
    UFUNCTION(BlueprintCallable)
    EWWEGender GetGender() const;
    
    UFUNCTION(BlueprintCallable)
    FWWEHeadItemAssets GetAssets(EPGCharacterBody Body) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

