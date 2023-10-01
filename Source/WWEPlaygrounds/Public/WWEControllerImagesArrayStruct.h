#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WWEControllerImagesArrayStruct.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FWWEControllerImagesArrayStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> ControllerImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Scale;
    
    WWEPLAYGROUNDS_API FWWEControllerImagesArrayStruct();
};

