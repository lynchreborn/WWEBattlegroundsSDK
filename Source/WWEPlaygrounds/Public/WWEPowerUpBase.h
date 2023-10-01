#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBItemParameters.h"
#include "EWWEPowerUpLevels.h"
#include "EWWEPowerUpType.h"
#include "EWWEPowerUpWithCustomBehaviour.h"
#include "Templates/SubclassOf.h"
#include "WWERewardableInterface.h"
#include "WWEPowerUpBase.generated.h"

class UMaterialInterface;
class UWWECommentSettings;
class UWWEPowerUpBaseParameters;
class UWWEPowerUpTier;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEPowerUpBase : public USBItemParameters, public IWWERewardableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEPowerUpTier> TierGroup;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AffectedBarStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEPowerUpLevels LevelPowerUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEPowerUpWithCustomBehaviour CustomBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEPowerUpBaseParameters> PowerUpParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEPowerUpType PowerUpType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FxSoundFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FxSoundVolumeFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bLowModeParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> OriginalMaterialsHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> OriginalMaterialsBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor ColorEmissiveFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor FresnelFresnelReversePosTopNegBottomPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor TillingIntensitySpeedXSpeedY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCanApplyFresnel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWWECommentSettings> ActivateCommentSettings;
    
    UPROPERTY(EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    uint32 HowManyTimesHasReceivedHitsWhileActiveThisPowerUp;
    
    UPROPERTY(EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    uint32 HowManyTimesHasHitsWhileActiveThisPowerUp;
    
public:
    UWWEPowerUpBase();
    
    // Fix for true pure virtual functions not being implemented
};

