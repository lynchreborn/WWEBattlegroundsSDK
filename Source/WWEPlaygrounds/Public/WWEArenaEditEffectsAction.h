#pragma once
#include "CoreMinimal.h"
#include "WWEArenaEditAssetsSubSectionBase.h"
#include "WWEArenaEditEffectElement.h"
#include "WWEArenaEditEffectsAction.generated.h"

class AWWEArenaEditorParticleManager;
class UParticleSystem;
class USoundCue;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEArenaEditEffectsAction : public UWWEArenaEditAssetsSubSectionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> EffectRingFenceParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> SoundRingFence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USoundCue* SoundRingFenceRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* EffectRingFenceParticleSystemRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEArenaEditEffectElement> StageEffectsElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> SoundStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USoundCue* SoundStageRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWEArenaEditorParticleManager* CachedParticleManager;
    
public:
    UWWEArenaEditEffectsAction();
};

