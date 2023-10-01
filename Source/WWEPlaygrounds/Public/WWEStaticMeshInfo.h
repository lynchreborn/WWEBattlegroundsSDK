#pragma once
#include "CoreMinimal.h"
#include "WWEStaticMeshInfo.generated.h"

class UMaterialInstance;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FWWEStaticMeshInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> InteractableWeaponStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInstance>> InteractableWeaponMaterialsInstance;
    
    WWEPLAYGROUNDS_API FWWEStaticMeshInfo();
};

