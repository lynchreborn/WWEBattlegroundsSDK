#pragma once
#include "CoreMinimal.h"
#include "Sound/AmbientSound.h"
#include "WWEFadeableAmbientSound.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEFadeableAmbientSound : public AAmbientSound {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayOnBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideGlobalFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverridenFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideGlobalFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverridenFadeOutTime;
    
public:
    AWWEFadeableAmbientSound();
};

