#pragma once
#include "CoreMinimal.h"
#include "WWEAnimationVariation.h"
#include "WWEChangeApronSideVariation.generated.h"

UCLASS(Blueprintable)
class UWWEChangeApronSideVariation : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFaceRing;
    
    UWWEChangeApronSideVariation();
};

