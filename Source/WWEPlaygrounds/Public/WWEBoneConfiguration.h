#pragma once
#include "CoreMinimal.h"
#include "EWWEPhysicalAnimationProfile.h"
#include "WWEBodyData.h"
#include "WWEConstraintData.h"
#include "WWEPhysicalAnimationBodyData.h"
#include "WWEBoneConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FWWEBoneConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEBodyData BodyConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWWEPhysicalAnimationProfile, FWWEPhysicalAnimationBodyData> PhysicalAnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWWEPhysicalAnimationProfile, FWWEConstraintData> ConstraintDatas;
    
    WWEPLAYGROUNDS_API FWWEBoneConfiguration();
};

