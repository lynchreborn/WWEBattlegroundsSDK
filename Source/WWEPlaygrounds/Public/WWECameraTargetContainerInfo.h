#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WWECameraTargetContainerInfo.generated.h"

USTRUCT(BlueprintType)
struct FWWECameraTargetContainerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FVector2D TargetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FVector2D TargetSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float InitialZoom;
    
    WWEPLAYGROUNDS_API FWWECameraTargetContainerInfo();
};

