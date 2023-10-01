#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PGArenaEditAssetsActionBase.h"
#include "WWEArenaEditMusicAction.generated.h"

class AWWEAmbienMusicActivator;
class USoundBase;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEArenaEditMusicAction : public UPGArenaEditAssetsActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> MusicCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USoundBase* MusicCueRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle FadeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWEAmbienMusicActivator* FadeActor;
    
public:
    UWWEArenaEditMusicAction();
protected:
    UFUNCTION(BlueprintCallable)
    void FadeInArenaMusic();
    
};

