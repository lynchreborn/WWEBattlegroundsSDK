#pragma once
#include "CoreMinimal.h"
#include "WWEInteractableWeapon.h"
#include "WWESkeletalMeshInfo.h"
#include "WWESkeletalWeapon.generated.h"

class UMaterialInterface;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWESkeletalWeapon : public AWWEInteractableWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWESkeletalMeshInfo> InteractableWeaponMeshesInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OverrideMaterial;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshComponent;
    
public:
    AWWESkeletalWeapon();
};

