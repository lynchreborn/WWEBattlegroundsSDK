#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EWWEDirection.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_ClimbCage.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_ClimbCage : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWWEDirection Side;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector RopeAdjustLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RopeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightOffset;
    
public:
    UWWEAction_ClimbCage();
};

