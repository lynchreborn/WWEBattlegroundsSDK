#pragma once
#include "CoreMinimal.h"
#include "WWELavaPitColliders.generated.h"

class UBoxComponent;

USTRUCT(BlueprintType)
struct WWEPLAYGROUNDS_API FWWELavaPitColliders {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBoxComponent*> BoxColliders;
    
    FWWELavaPitColliders();
};

