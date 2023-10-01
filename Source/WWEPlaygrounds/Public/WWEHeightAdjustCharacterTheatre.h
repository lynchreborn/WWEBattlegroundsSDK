#pragma once
#include "CoreMinimal.h"
#include "WWECharacterTheatre.h"
#include "WWEHeightAdjustCharacterTheatre.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEHeightAdjustCharacterTheatre : public AWWECharacterTheatre {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdjustByHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightAdjustMultiplier;
    
public:
    AWWEHeightAdjustCharacterTheatre();
};

