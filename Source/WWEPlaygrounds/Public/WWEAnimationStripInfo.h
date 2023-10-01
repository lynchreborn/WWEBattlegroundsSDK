#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WWEAnimationStripInfo.generated.h"

USTRUCT(BlueprintType)
struct FWWEAnimationStripInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartAtTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfLoops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaybackSpeed;
    
    WWEPLAYGROUNDS_API FWWEAnimationStripInfo();
};

