#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "WWEInteractableMapItemInterface.h"
#include "WWELevelEvent.h"
#include "WWEEventAngryRam.generated.h"

class AWWEAngryRamCharacter;
class AWWECharacterCombat;
class AWWERemoteAngryRam;
class UBoxComponent;
class USceneComponent;
class UWWEDynamicMaterialComponent;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEEventAngryRam : public AWWELevelEvent, public IWWEInteractableMapItemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* RemoteButtonComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* RemoteRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemotePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWWEAngryRamCharacter* AngryRamCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControlTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RechargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterCombat* ReservedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MoveToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RotateToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEDynamicMaterialComponent* DynamicMaterialComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWERemoteAngryRam* RemoteAngryRam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle AngryRamEventTimerHandle;
    
public:
    AWWEEventAngryRam();
private:
    UFUNCTION(BlueprintCallable)
    void RechargeRemote();
    
    UFUNCTION(BlueprintCallable)
    void CancelControlRam(AWWECharacterCombat* Character);
    
    
    // Fix for true pure virtual functions not being implemented
};

