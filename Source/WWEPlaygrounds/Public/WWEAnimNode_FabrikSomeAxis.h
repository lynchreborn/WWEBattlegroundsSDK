#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_Fabrik.h"
#include "WWEAnimNode_FabrikSomeAxis.generated.h"

USTRUCT(BlueprintType)
struct WWEPLAYGROUNDS_API FWWEAnimNode_FabrikSomeAxis : public FAnimNode_Fabrik {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreXAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreYAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreZAxis;
    
    FWWEAnimNode_FabrikSomeAxis();
};

