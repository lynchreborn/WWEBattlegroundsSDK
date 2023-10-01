#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESBMessageBoxClosingReason.h"
#include "ESBMessageBoxSize.h"
#include "ESBMessageBoxType.h"
#include "ESBOperationResult.h"
#include "SBQueuedMsgBoxData.h"
#include "SBSceneManager.generated.h"

class USBBaseScene;
class USBBaseTransition;
class USBDefaultContentSceneManager;
class USBGameInstance;
class USBLoadingScreenScene;
class USBMessageBoxWidget;
class USBNotificationsWidget;
class USBSavingIcon;
class USBSlateLoadingScreenHelper;

UCLASS(Blueprintable)
class SABERGAME_API USBSceneManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBBaseTransition* CloseLoadingScreenTempTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBBaseTransition* OpenLoadingScreenTempTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName RefreshToContexTempContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName RefreshToContextTempDefaultSceneUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName RefreshToContextTempTransitionOutUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRefContTempCloseLoadingScreenSimultaneously;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName RefreshToContextTempLoadingScreenTransitionOutUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RefreshToContextTempFinishConditionsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBBaseScene* ClearContextTempCurrentScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ClearContextTempExpectedContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ClearContextTempTransitionInUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bClearContextTempCloseSceneBeforeLoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ClearContextTempLoadingScreenSceneUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ClearContextTempLoadingScreenTransitionInUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CloseAndUnloadBackgroundScenesCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CloseAndUnloadBackgroundScenesContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequestLoadContextLoadCheckerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RequestLoadContextLoadCheckerContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OpenAndLoadBackgroundScenesCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OpenAndLoadBackgroundScenesContext;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBGameInstance* MyGameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBDefaultContentSceneManager* DefaultContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBBaseScene* CurrentScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBLoadingScreenScene* CurrentLoadingScreenScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CurrentContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBBaseScene*> ScenesStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBBaseScene*> PreloadedScenes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBQueuedMsgBoxData> MsgBoxQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBSlateLoadingScreenHelper* SlateLoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBLoadingScreenScene*> LoadingScreenScenes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBBaseScene*> Scenes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBBaseScene*> BackgroundScenes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBBaseTransition*> Transitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableUIInputsOnTransition;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBBaseTransition* CurrentTransitionIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBBaseTransition* CurrentTransitionOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBBaseScene* CurrentFromScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBBaseScene* CurrentToScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBMessageBoxWidget* MsgBoxWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USBMessageBoxWidget> MessageBoxWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USBMessageBoxWidget> MessageBoxWidgetLargeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBNotificationsWidget* NotificationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USBNotificationsWidget> NotificationWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBSavingIcon* SavingIconWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USBSavingIcon> SavingIconWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShouldRecoverFocusNextTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOnAppFocusReceivedNextTick;
    
public:
    USBSceneManager();
protected:
    UFUNCTION(BlueprintCallable)
    void UnloadAllWithoutContext(FName CheckContext);
    
public:
    UFUNCTION(BlueprintCallable)
    void ShowLoadingScreen(FName LoadingScreenSceneUID, FName LoadingScreenTransitionOutUID);
    
    UFUNCTION(BlueprintCallable)
    void SetupTransition(USBBaseScene* from, USBBaseScene* to, USBBaseTransition* InTransition, USBBaseTransition* OutTransition);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RequestUnloadContext(FName CheckContext);
    
    UFUNCTION(BlueprintCallable)
    void RequestLoadContextLoadChecker();
    
    UFUNCTION(BlueprintCallable)
    void RequestLoadContext(FName NextContext);
    
    UFUNCTION(BlueprintCallable)
    void RefreshToContextOnOpenScene();
    
    UFUNCTION(BlueprintCallable)
    void RefreshToContextOnLoadingScreenSceneIsIn();
    
    UFUNCTION(BlueprintCallable)
    void RefreshToContextOnFinishConditionHappens();
    
    UFUNCTION(BlueprintCallable)
    void RefreshToContextOnContextLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void RefreshToContext(FName Context, FName DefaultSceneUID, FName TransitionOutUID, bool bCloseLoadingScreenSimultaneously, FName LoadingScreenSceneUID, FName LoadingScreenTransitionInUID, FName LoadingScreenTransitionOutUID);
    
    UFUNCTION(BlueprintCallable)
    void RefreshMessageBoxFocus();
    
    UFUNCTION(BlueprintCallable)
    void PushScene(FName SceneUID, FName TransitionInUID, FName TransitionOutUID);
    
    UFUNCTION()
    void PushResultMessageBox(int32 ControllerId, ESBOperationResult OperationResult, ESBMessageBoxType DefaultType, const FText& DefaultMessage, UObject* CallbackTarget, const FName& CallbackName, bool bHasPriotity, const FText& Title, ESBMessageBoxSize MessageBoxSize, const FText& Button1Text, const FText& Button2Text);
    
    UFUNCTION(BlueprintCallable)
    void PushMessageBox(int32 ControllerId, ESBMessageBoxType Type, const FText& Message, UObject* CallbackTarget, const FName& CallbackName, bool bHasPriotity, const FText& Title, ESBMessageBoxSize MessageBoxSize, const FText& Button1Text, const FText& Button2Text);
    
    UFUNCTION(BlueprintCallable)
    void PrepareContext(FName Context);
    
    UFUNCTION(BlueprintCallable)
    void PopScene(FName TransitionInUID, FName TransitionOutUID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OpenAndLoadBackgroundScenesChecker();
    
    UFUNCTION(BlueprintCallable)
    void OpenAndLoadBackgroundScenes(FName Context);
    
    UFUNCTION(BlueprintCallable)
    void OnTransitionStart(USBBaseScene* from, USBBaseScene* to, USBBaseTransition* InTransition, USBBaseTransition* OutTransition);
    
    UFUNCTION(BlueprintCallable)
    void OnTransitionEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnShowLoadingScreenFinishes();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPreLoadMap(const FString& LevelName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMsgBoxClosed(ESBMessageBoxClosingReason Reason);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMessageBoxComplete();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHardTravel();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameShutDown();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCloseLoadingScreenFinishes();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsLoadingScreenOpen();
    
    UFUNCTION(BlueprintCallable)
    bool IsAnyMessageBoxOpen();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InternalTransitionateOut();
    
    UFUNCTION(BlueprintCallable)
    void InternalTranistionateIn();
    
public:
    UFUNCTION(BlueprintCallable)
    void InternalShowMsgBox(FSBQueuedMsgBoxData MsgBoxData);
    
    UFUNCTION(BlueprintCallable)
    USBBaseTransition* GetTransitionByUID(FName UID);
    
    UFUNCTION(BlueprintCallable)
    USBBaseScene* GetSceneByUID(FName UID);
    
    UFUNCTION(BlueprintCallable)
    USBLoadingScreenScene* GetLoadingSceneByUID(FName UID);
    
    UFUNCTION(BlueprintCallable)
    USBBaseScene* GetBackgroundSceneByUID(FName UID);
    
    UFUNCTION(BlueprintCallable)
    void ForcePushScene(FName SceneUID);
    
    UFUNCTION(BlueprintCallable)
    void ForcePopScene();
    
    UFUNCTION(BlueprintCallable)
    void ForceClearStack();
    
    UFUNCTION(BlueprintCallable)
    void ForceBackTo(FName SceneUID);
    
    UFUNCTION(BlueprintCallable)
    bool DebugGetIsInTransition();
    
    UFUNCTION(BlueprintCallable)
    void CloseLoadingScreen(FName LoadingScreenTransitionInUID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CloseAndUnloadBackgroundScenesChecker();
    
    UFUNCTION(BlueprintCallable)
    void CloseAndUnloadBackgroundScenes(FName CheckContext);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearStack(FName TransitionUID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearContextOpenLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    void ClearContextOnAllTransitionsFinish();
    
    UFUNCTION(BlueprintCallable)
    void ClearContextCloseCurrentScene();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearContext(FName ExpectedContext, FName TransitionInUID, bool bCloseSceneBeforeLoadingScreen, FName LoadingScreenSceneUID, FName LoadingScreenTransitionInUID);
    
    UFUNCTION(BlueprintCallable)
    void BackTo(FName SceneUID, FName TransitionInUID, FName TransitionOutUID);
    
};

