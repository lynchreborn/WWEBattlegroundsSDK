#include "SBSceneManager.h"

void USBSceneManager::UnloadAllWithoutContext(FName CheckContext) {
}

void USBSceneManager::ShowLoadingScreen(FName LoadingScreenSceneUID, FName LoadingScreenTransitionOutUID) {
}

void USBSceneManager::SetupTransition(USBBaseScene* from, USBBaseScene* to, USBBaseTransition* InTransition, USBBaseTransition* OutTransition) {
}

void USBSceneManager::RequestUnloadContext(FName CheckContext) {
}

void USBSceneManager::RequestLoadContextLoadChecker() {
}

void USBSceneManager::RequestLoadContext(FName NextContext) {
}

void USBSceneManager::RefreshToContextOnOpenScene() {
}

void USBSceneManager::RefreshToContextOnLoadingScreenSceneIsIn() {
}

void USBSceneManager::RefreshToContextOnFinishConditionHappens() {
}

void USBSceneManager::RefreshToContextOnContextLoaded() {
}

void USBSceneManager::RefreshToContext(FName Context, FName DefaultSceneUID, FName TransitionOutUID, bool bCloseLoadingScreenSimultaneously, FName LoadingScreenSceneUID, FName LoadingScreenTransitionInUID, FName LoadingScreenTransitionOutUID) {
}

void USBSceneManager::RefreshMessageBoxFocus() {
}

void USBSceneManager::PushScene(FName SceneUID, FName TransitionInUID, FName TransitionOutUID) {
}

void USBSceneManager::PushResultMessageBox(int32 ControllerId, ESBOperationResult OperationResult, ESBMessageBoxType DefaultType, const FText& DefaultMessage, UObject* CallbackTarget, const FName& CallbackName, bool bHasPriotity, const FText& Title, ESBMessageBoxSize MessageBoxSize, const FText& Button1Text, const FText& Button2Text) {
}

void USBSceneManager::PushMessageBox(int32 ControllerId, ESBMessageBoxType Type, const FText& Message, UObject* CallbackTarget, const FName& CallbackName, bool bHasPriotity, const FText& Title, ESBMessageBoxSize MessageBoxSize, const FText& Button1Text, const FText& Button2Text) {
}

void USBSceneManager::PrepareContext(FName Context) {
}

void USBSceneManager::PopScene(FName TransitionInUID, FName TransitionOutUID) {
}

void USBSceneManager::OpenAndLoadBackgroundScenesChecker() {
}

void USBSceneManager::OpenAndLoadBackgroundScenes(FName Context) {
}

void USBSceneManager::OnTransitionStart(USBBaseScene* from, USBBaseScene* to, USBBaseTransition* InTransition, USBBaseTransition* OutTransition) {
}

void USBSceneManager::OnTransitionEnd() {
}

void USBSceneManager::OnShowLoadingScreenFinishes() {
}

void USBSceneManager::OnPreLoadMap(const FString& LevelName) {
}

void USBSceneManager::OnMsgBoxClosed(ESBMessageBoxClosingReason Reason) {
}

void USBSceneManager::OnMessageBoxComplete() {
}

void USBSceneManager::OnHardTravel() {
}

void USBSceneManager::OnGameShutDown() {
}

void USBSceneManager::OnCloseLoadingScreenFinishes() {
}

bool USBSceneManager::IsLoadingScreenOpen() {
    return false;
}

bool USBSceneManager::IsAnyMessageBoxOpen() {
    return false;
}

void USBSceneManager::InternalTransitionateOut() {
}

void USBSceneManager::InternalTranistionateIn() {
}

void USBSceneManager::InternalShowMsgBox(FSBQueuedMsgBoxData MsgBoxData) {
}

USBBaseTransition* USBSceneManager::GetTransitionByUID(FName UID) {
    return NULL;
}

USBBaseScene* USBSceneManager::GetSceneByUID(FName UID) {
    return NULL;
}

USBLoadingScreenScene* USBSceneManager::GetLoadingSceneByUID(FName UID) {
    return NULL;
}

USBBaseScene* USBSceneManager::GetBackgroundSceneByUID(FName UID) {
    return NULL;
}

void USBSceneManager::ForcePushScene(FName SceneUID) {
}

void USBSceneManager::ForcePopScene() {
}

void USBSceneManager::ForceClearStack() {
}

void USBSceneManager::ForceBackTo(FName SceneUID) {
}

bool USBSceneManager::DebugGetIsInTransition() {
    return false;
}

void USBSceneManager::CloseLoadingScreen(FName LoadingScreenTransitionInUID) {
}

void USBSceneManager::CloseAndUnloadBackgroundScenesChecker() {
}

void USBSceneManager::CloseAndUnloadBackgroundScenes(FName CheckContext) {
}

void USBSceneManager::ClearStack(FName TransitionUID) {
}

void USBSceneManager::ClearContextOpenLoadingScreen() {
}

void USBSceneManager::ClearContextOnAllTransitionsFinish() {
}

void USBSceneManager::ClearContextCloseCurrentScene() {
}

void USBSceneManager::ClearContext(FName ExpectedContext, FName TransitionInUID, bool bCloseSceneBeforeLoadingScreen, FName LoadingScreenSceneUID, FName LoadingScreenTransitionInUID) {
}

void USBSceneManager::BackTo(FName SceneUID, FName TransitionInUID, FName TransitionOutUID) {
}

USBSceneManager::USBSceneManager() {
    this->CloseLoadingScreenTempTransition = NULL;
    this->OpenLoadingScreenTempTransition = NULL;
    this->bRefContTempCloseLoadingScreenSimultaneously = false;
    this->RefreshToContextTempFinishConditionsCount = 0;
    this->ClearContextTempCurrentScene = NULL;
    this->bClearContextTempCloseSceneBeforeLoadingScreen = false;
    this->CloseAndUnloadBackgroundScenesCount = 0;
    this->RequestLoadContextLoadCheckerCount = 0;
    this->OpenAndLoadBackgroundScenesCount = 0;
    this->MyGameInstance = NULL;
    this->DefaultContent = NULL;
    this->CurrentScene = NULL;
    this->CurrentLoadingScreenScene = NULL;
    this->SlateLoadingScreen = NULL;
    this->bDisableUIInputsOnTransition = false;
    this->IsInTransition = false;
    this->CurrentTransitionIn = NULL;
    this->CurrentTransitionOut = NULL;
    this->CurrentFromScene = NULL;
    this->CurrentToScene = NULL;
    this->MsgBoxWidget = NULL;
    this->NotificationWidget = NULL;
    this->SavingIconWidget = NULL;
    this->bShouldRecoverFocusNextTick = false;
    this->bOnAppFocusReceivedNextTick = false;
}

