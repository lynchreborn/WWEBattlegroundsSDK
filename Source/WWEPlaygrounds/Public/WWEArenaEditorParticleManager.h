#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WWEArenaEditorEmitterItem.h"
#include "WWEArenaEditorParticleManager.generated.h"

class UAudioComponent;
class USceneComponent;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEArenaEditorParticleManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* ParticleManagerRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWEArenaEditorEmitterItem> EmittersActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FString, UAudioComponent*> SoundsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayEffectsTime;
    
public:
    AWWEArenaEditorParticleManager();
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStartParticlesInCombat();
    
};

