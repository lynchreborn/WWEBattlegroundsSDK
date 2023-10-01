#pragma once
#include "CoreMinimal.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_CageTopElectrocuted.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_CageTopElectrocuted : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightOffset;
    
public:
    UWWEAction_CageTopElectrocuted();
};

