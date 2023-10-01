#pragma once
#include "CoreMinimal.h"
#include "WWEAudioInfo.h"
#include "WWEAudioScreenInfo.generated.h"

USTRUCT(BlueprintType)
struct FWWEAudioScreenInfo : public FWWEAudioInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumeFade;
    
    WWEPLAYGROUNDS_API FWWEAudioScreenInfo();
};

