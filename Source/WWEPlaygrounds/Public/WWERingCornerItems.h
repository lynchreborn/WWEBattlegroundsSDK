#pragma once
#include "CoreMinimal.h"
#include "WWERingTurnbuckleItems.h"
#include "WWERingCornerItems.generated.h"

class UCapsuleComponent;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FWWERingCornerItems {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Post;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* DestructionCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWWERingTurnbuckleItems UpperTurnbuckleItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWWERingTurnbuckleItems MiddleTurnbuckleItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWWERingTurnbuckleItems LowerTurnbuckleItems;
    
    WWEPLAYGROUNDS_API FWWERingCornerItems();
};

