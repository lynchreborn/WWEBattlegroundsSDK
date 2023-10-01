#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WWEInteractableWeapon.h"
#include "WWEStaticMeshInfo.h"
#include "WWEStaticWeapon.generated.h"

class AWWEStaticMeshActor;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEStaticWeapon : public AWWEInteractableWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEStaticMeshInfo> InteractableWeaponMeshesInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEStaticMeshInfo> DestroyedMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWWEStaticMeshActor> DestroyedMeshesClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Impulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumAngularImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumAngularImpulse;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AWWEStaticMeshActor*> DestroyedMeshesActors;
    
public:
    AWWEStaticWeapon();
};

