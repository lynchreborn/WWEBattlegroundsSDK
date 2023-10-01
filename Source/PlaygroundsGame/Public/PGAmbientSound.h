#pragma once
#include "CoreMinimal.h"
#include "Sound/AmbientSound.h"
#include "PGAmbientSound.generated.h"

class UAudioComponent;
class USoundBase;

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API APGAmbientSound : public AAmbientSound {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* CachedAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> Music;
    
public:
    APGAmbientSound();
};

