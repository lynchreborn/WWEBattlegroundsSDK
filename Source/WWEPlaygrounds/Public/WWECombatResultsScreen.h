#pragma once
#include "CoreMinimal.h"
#include "SBRootUserWidget.h"
#include "EWWECombatResultsState.h"
#include "WWECombatResultsScreen.generated.h"

class UPanelWidget;
class UWWECombatResultsEndButtons;
class UWWECombatResultsSlot;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWECombatResultsScreen : public USBRootUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* SlotsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* VSWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HideScreenAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShowScreenAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWECombatResultsEndButtons* EndButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWWECombatResultsSlot*> CurrentPlayerSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWECombatResultsState CurrentState;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToNextState[3];
    
public:
    UWWECombatResultsScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void WaitAndGoNextState(int32 WaitTime);
    
    UFUNCTION(BlueprintCallable)
    void SetState(EWWECombatResultsState NextState);
    
    UFUNCTION(BlueprintCallable)
    void OnAppFocusReceived();
    
    UFUNCTION(BlueprintCallable)
    void GoNextState();
    
    UFUNCTION(BlueprintCallable)
    void GetAndUpdateNumberAndTypeOfPlayers();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearTimerHandles();
    
};

