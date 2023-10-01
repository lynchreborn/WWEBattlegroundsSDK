#pragma once
#include "CoreMinimal.h"
#include "EWWESkinRenderProcessType.h"
#include "WWESkinRenderProcessInfo.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FWWESkinRenderProcessInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWESkinRenderProcessType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* SkinMaterial;
    
    WWEPLAYGROUNDS_API FWWESkinRenderProcessInfo();
};

