#pragma once
#include "CoreMinimal.h"
#include "WWEChangeItemColorInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FWWEChangeItemColorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ColorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ItemWidgetImage;
    
    WWEPLAYGROUNDS_API FWWEChangeItemColorInfo();
};

