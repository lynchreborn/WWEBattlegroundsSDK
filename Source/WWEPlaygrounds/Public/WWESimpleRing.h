#pragma once
#include "CoreMinimal.h"
#include "WWERing.h"
#include "WWESimpleRing.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWESimpleRing : public AWWERing {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshComponent;
    
public:
    AWWESimpleRing();
};

