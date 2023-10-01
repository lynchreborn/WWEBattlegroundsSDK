#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PhysicsEngine/ConstraintInstance.h"
#include "WWEConstraintData.generated.h"

USTRUCT(BlueprintType)
struct FWWEConstraintData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FConstraintProfileProperties ConstraintConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ConstraintTransform1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ConstraintTransform2;
    
    WWEPLAYGROUNDS_API FWWEConstraintData();
};

