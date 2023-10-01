#pragma once
#include "CoreMinimal.h"
#include "WWEAnimViewerCategory.generated.h"

class UWWEAnimViewerAction;

USTRUCT(BlueprintType)
struct FWWEAnimViewerCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWWEAnimViewerAction*> Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyDebug;
    
    WWEPLAYGROUNDS_API FWWEAnimViewerCategory();
};

