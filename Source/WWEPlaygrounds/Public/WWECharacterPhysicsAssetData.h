#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WWEBoneConfiguration.h"
#include "WWECharacterPhysicsAssetData.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWECharacterPhysicsAssetData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEBoneConfiguration> BoneConfigurations;
    
    UWWECharacterPhysicsAssetData();
};

