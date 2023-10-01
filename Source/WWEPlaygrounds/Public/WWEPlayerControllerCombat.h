#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Camera/PlayerCameraManager.h"
#include "WWEPlayerControllerGameplay.h"
#include "WWEPlayerControllerCombat.generated.h"

class AWWEPlayerControllerCombat;
class USBControlComponent;
class UWWEAngryRamControlComponent;
class UWWEContextualActionsComponent;
class UWWEControlComponentCombat;
class UWWELearningComponent;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEPlayerControllerCombat : public AWWEPlayerControllerGameplay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOnGameplayLose;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWWEControlComponentCombat* ControlComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWWEAngryRamControlComponent* ControlRamComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBControlComponent* ActualControlComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWWEContextualActionsComponent* ContextualActionsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWWELearningComponent* LearningComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FViewTargetTransitionParams StoredTransitionParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle SyncRTTTimer;
    
public:
    AWWEPlayerControllerCombat();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetKOTRRecords(const int32 RecordKickOuts, const int32 RecordTimeOnRing);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestServerTime(AWWEPlayerControllerCombat* requester, float requestWorldTime);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowLoseResults();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReportServerTime(float requestWorldTime, float serverTime);
    
};

