#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "WWEStaticWeapon.h"
#include "WWEFoldableChair.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEFoldableChair : public AWWEStaticWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SnapCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectsNotCloseWhenEnablingCollision;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FQuat SnapOffsetFinalRotation;
    
public:
    AWWEFoldableChair();
};

