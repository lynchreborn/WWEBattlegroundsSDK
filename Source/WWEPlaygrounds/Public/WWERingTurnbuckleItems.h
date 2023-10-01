#pragma once
#include "CoreMinimal.h"
#include "WWERingTurnbuckleItems.generated.h"

class UPhysicsConstraintComponent;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FWWERingTurnbuckleItems {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Turnbuckle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Rope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Pad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPhysicsConstraintComponent* LeftConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPhysicsConstraintComponent* RightConstraint;
    
    WWEPLAYGROUNDS_API FWWERingTurnbuckleItems();
};

