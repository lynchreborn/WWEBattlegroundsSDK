#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EWWEActionTypes.h"
#include "EWWECombinationActionType.h"
#include "EWWECombinationInput.h"
#include "EWWEInputAction.h"
#include "WWEControlComponentGameplay.h"
#include "WWEInputTimeData.h"
#include "WWEControlComponentCombat.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WWEPLAYGROUNDS_API UWWEControlComponentCombat : public UWWEControlComponentGameplay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FRotator CameraInputTransformRotator;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FWWEInputTimeData InputTimeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float MinValueAxisMinigame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bAxisMinigameIsLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCombinationModeEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCombinationSignatureEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<EWWECombinationInput> CurrentCombinationKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<EWWECombinationInput> CurrentThrowCombinationKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandleCombination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandleThrowCombination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bInitiedIrishWhip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bPickWeaponTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bBlockRightThumbstickX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bBlockRightThumbstickY;
    
public:
    UWWEControlComponentCombat();
    UFUNCTION(BlueprintCallable)
    void UpTurnbuckle();
    
    UFUNCTION(BlueprintCallable)
    void UpDownRing();
    
    UFUNCTION(BlueprintCallable)
    void Submission();
    
    UFUNCTION(BlueprintCallable)
    void StandUpStunned();
    
protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerSetClimbInput(FVector ClimbInput);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSaveChosenAction(EWWEActionTypes ActionType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestSprint(const bool _bRequestSprint);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestHelp(const bool _bRequestHelp);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerProcessLocalEndAction(EWWEInputAction ActionInput);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerProcessAction(EWWEInputAction ActionInput, FVector InputAxis, bool bSkipCombinationMode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFillMinigame(bool bEnable);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCombinationSignatureReleased();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCombinationSignaturePressed();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCombinationModeReleased();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCombinationModePressed();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCheckCombinationMode(const TArray<EWWECombinationInput>& CombinationInput, const EWWECombinationActionType ActionType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAxisMiniGame(bool bLeft);
    
public:
    UFUNCTION(BlueprintCallable)
    void Release();
    
    UFUNCTION(BlueprintCallable)
    void GoToApron();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearThrowCombinationMode();
    
    UFUNCTION(BlueprintCallable)
    void ClearCombinationMode();
    
    UFUNCTION(BlueprintCallable)
    void CheckCombinationMode(bool bThrowCombination);
    
};

