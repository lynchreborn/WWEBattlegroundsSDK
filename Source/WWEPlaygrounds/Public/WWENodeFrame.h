#pragma once
#include "CoreMinimal.h"
#include "WWENodeFrame.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FWWENodeFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> PossibleFrames;
    
    WWEPLAYGROUNDS_API FWWENodeFrame();
};

