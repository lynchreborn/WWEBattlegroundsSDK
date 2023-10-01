#pragma once
#include "CoreMinimal.h"
#include "EWWERingPhysicsState.h"
#include "EWWERingRopesFloor.h"
#include "WWERingCornerInfo.generated.h"

class AActor;
class AWWERingPostWeapon;
class UBoxComponent;
class UCapsuleComponent;
class UPhysicsConstraintComponent;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FWWERingCornerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CornerMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<EWWERingRopesFloor, UPhysicsConstraintComponent*> LeftConstraints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<EWWERingRopesFloor, UPhysicsConstraintComponent*> RightConstraints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* DestructionCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBoxComponent* ApronCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBoxComponent*> MiniWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* DestructiblePost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWWERingPostWeapon* PostWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWWERingPhysicsState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDetachedRopes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PushedActors;
    
    WWEPLAYGROUNDS_API FWWERingCornerInfo();
};

