#pragma once
#include "CoreMinimal.h"
#include "WWEAmbienMusicActivator.h"
#include "WWEAmbientMusicActivatorOpenExitMM.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEAmbientMusicActivatorOpenExitMM : public AWWEAmbienMusicActivator {
    GENERATED_BODY()
public:
    AWWEAmbientMusicActivatorOpenExitMM();
protected:
    UFUNCTION(BlueprintCallable)
    void MMPlay();
    
};

