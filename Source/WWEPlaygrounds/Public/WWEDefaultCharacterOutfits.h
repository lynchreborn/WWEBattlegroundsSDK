#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WWEDefaultCharacterOutfits.generated.h"

class UMaterialInstance;
class UPGItemBodyMeshConfig;

USTRUCT(BlueprintType)
struct FWWEDefaultCharacterOutfits {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPGItemBodyMeshConfig> DefaultOutfitChestMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPGItemBodyMeshConfig> DefaultOutfitThighsMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInstance> DefaultOutfitChestMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInstance> DefaultOutfitThighsMaterialInstance;
    
    WWEPLAYGROUNDS_API FWWEDefaultCharacterOutfits();
};

