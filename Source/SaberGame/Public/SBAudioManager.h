#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBAudioManager.generated.h"

class UAudioComponent;

UCLASS(Blueprintable)
class SABERGAME_API USBAudioManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* MusicAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> SoundClassBaseVolume;
    
    USBAudioManager();
    UFUNCTION(BlueprintCallable)
    void PlayMusic(float FadeInDuration, UAudioComponent* MusicAudioComponentIn);
    
};

