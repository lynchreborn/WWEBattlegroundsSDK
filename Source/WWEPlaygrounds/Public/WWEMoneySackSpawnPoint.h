#pragma once
#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "WWEMoneySackSpawnPoint.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEMoneySackSpawnPoint : public ATargetPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHanging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomWeight;
    
    AWWEMoneySackSpawnPoint();
};

