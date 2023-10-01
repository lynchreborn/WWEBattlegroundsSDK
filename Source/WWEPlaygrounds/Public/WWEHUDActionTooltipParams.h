#pragma once
#include "CoreMinimal.h"
#include "EWWEButtonCondition.h"
#include "EWWEInputAction.h"
#include "WWEHUDActionTooltipParams.generated.h"

USTRUCT(BlueprintType)
struct WWEPLAYGROUNDS_API FWWEHUDActionTooltipParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEInputAction InputAction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEButtonCondition ButtonCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckInputHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TopActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BottomActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InputActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    FWWEHUDActionTooltipParams();
};

