#pragma once
#include "CoreMinimal.h"
#include "WWEPoseGenderSettings.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FWWEPoseGenderSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> AnimationSequence;
    
    WWEPLAYGROUNDS_API FWWEPoseGenderSettings();
};

