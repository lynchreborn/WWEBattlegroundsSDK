#pragma once
#include "CoreMinimal.h"
#include "WWESkeletalMeshInfo.generated.h"

class UMaterialInstance;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FWWESkeletalMeshInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> InteractableWeaponSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInstance>> InteractableWeaponMaterialsInstance;
    
    WWEPLAYGROUNDS_API FWWESkeletalMeshInfo();
};

