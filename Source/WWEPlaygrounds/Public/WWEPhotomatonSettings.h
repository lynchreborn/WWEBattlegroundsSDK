#pragma once
#include "CoreMinimal.h"
#include "WWEPhotomatonSettings.generated.h"

USTRUCT(BlueprintType)
struct FWWEPhotomatonSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PointLightTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PlaneToShow;
    
    WWEPLAYGROUNDS_API FWWEPhotomatonSettings();
};

