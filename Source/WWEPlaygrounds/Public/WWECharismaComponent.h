#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "EWWEUserProgressionCondition.h"
#include "WWECharismaAction.h"
#include "WWECharismaActionWithParameters.h"
#include "WWECharismaActionWithRestrictions.h"
#include "WWECharismaInactivityAction.h"
#include "WWECharismaComponent.generated.h"

class AWWECharacterCombat;
class UWWECharismaConfiguration;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WWEPLAYGROUNDS_API UWWECharismaComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWWECharismaConfiguration* CharismaConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentCharisma;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 bCharismaLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle CharismaLockTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle CharismaFlickerTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle CharismaFlickerFastTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle LoseCharismaWhileInactivityTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWECharismaActionWithRestrictions> AvailableFulfillableActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWECharismaAction> CurrentFulfillableActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<EWWEUserProgressionCondition> RecentlyFulfilledActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FWWECharismaInactivityAction InactivityAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 NumberOfActionsSkippedInARow;
    
public:
    UWWECharismaComponent();
    UFUNCTION(BlueprintCallable)
    void UnlockCharisma();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnProgressionPointsAdded(EWWEUserProgressionCondition Condition, int32 Quantity, const AWWECharacterCombat* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnInactivityTimeCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnCurrentFulfillableNegativeActionTimeOut(FWWECharismaActionWithParameters& CharismaAction);
    
    UFUNCTION(BlueprintCallable)
    void OnCurrentFulfillableActionTimeOut(EWWEUserProgressionCondition Condition);
    
    UFUNCTION(BlueprintCallable)
    void OnCurrentFulfillableActionNearTimeOut(EWWEUserProgressionCondition Condition);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnLockCharisma(bool _bCharismaLocked, float Duration);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastOnInactivityTimeCompleted();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnAddCharisma(int32 _CurrentCharisma, int32 CharismaToAdd, bool bKeyAction, bool bInactivity, bool bSuggestedAction);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnActionsChanged(const TArray<FWWECharismaAction>& InCurrentFulfillableActions, bool bDidCharismaChange);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastOnActionNearTimeOut(EWWEUserProgressionCondition Condition);
    
    UFUNCTION(BlueprintCallable)
    void FinishLoadingCharismaValuesFromConfiguration();
    
    UFUNCTION(BlueprintCallable)
    void FinishDelayEndCurrentAction();
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableInactivity(const AWWECharacterCombat* CharacterCombat);
    
    UFUNCTION(BlueprintCallable)
    void DisableInactivity(const AWWECharacterCombat* CharacterCombat);
    
    UFUNCTION(BlueprintCallable)
    void AddCharisma(int32 CharismaToAdd, bool bKeyAction, bool bInactivity, bool bSuggestedAction);
    
};

