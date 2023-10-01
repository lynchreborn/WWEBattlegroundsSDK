#include "SBDefaultContentUI.h"

void USBDefaultContentUI::StoreAnimationsFromTemplate(USBAnimationTemplateUserWidget* widgetTemplate) {
}

void USBDefaultContentUI::InitTipsStorage() {
}

void USBDefaultContentUI::InitAnimationStorage() {
}

UWidgetAnimation* USBDefaultContentUI::GetWidgetAnimationByName(FName Name) {
    return NULL;
}

FText USBDefaultContentUI::GetRandomTip() {
    return FText::GetEmpty();
}

void USBDefaultContentUI::GetKeyNamesBindedToActionForControllerType(FName ActionName, ESBControllerType ControllerType, TArray<FName>& OutKeyNames) const {
}

UTexture2D* USBDefaultContentUI::GetControllerTypeKeyIcon(ESBControllerType ControllerType, const FName& KeyName, const FName& IconStyleName) const {
    return NULL;
}

UTexture2D* USBDefaultContentUI::GetControllerTypeIcon(ESBControllerType ControllerType, const FName& IconStyleName) const {
    return NULL;
}

UTexture2D* USBDefaultContentUI::GetControllerTypeCustomTexture(ESBControllerType ControllerType, const FString& _TextureName) const {
    return NULL;
}

TArray<UTexture2D*> USBDefaultContentUI::GetControllerTypeAlternativeActionsIcons(ESBControllerType ControllerType, const FName& ActionName, const FName& IconStyleName) const {
    return TArray<UTexture2D*>();
}

UTexture2D* USBDefaultContentUI::GetControllerTypeActionIcon(ESBControllerType ControllerType, const FName& ActionName, const FName& IconStyleName) const {
    return NULL;
}

UTexture2D* USBDefaultContentUI::GetControllerIndexCustomTexture(int32 ControllerIndex, const FString& _TextureName, USBGameInstance* GameInstance) const {
    return NULL;
}

UTexture2D* USBDefaultContentUI::GetControllerIndexActionIcon(int32 ControllerIndex, const FName& ActionName, const FName& IconStyleName, const USBGameInstance* GameInstance) const {
    return NULL;
}

bool USBDefaultContentUI::GetCharacterRenderActionName(uint32 CharacterRenderActionID, FName& CharacterRenderActionName) const {
    return false;
}

bool USBDefaultContentUI::GetCharacterRenderActionID(const FName& CharacterRenderActionName, uint32& CharacterRenderActionID) const {
    return false;
}

UTexture2D* USBDefaultContentUI::GetActivePlayerCustomTexture(const FString& _TextureName, USBGameInstance* GameInstance) const {
    return NULL;
}

UTexture2D* USBDefaultContentUI::GetActivePlayerActionIcon(const FName& ActionName, const FName& IconStyleName, const USBGameInstance* GameInstance) const {
    return NULL;
}

USBDefaultContentUI::USBDefaultContentUI() {
    this->AxisDeadZone = 0.65f;
    this->AcceptSoundCue = NULL;
    this->CancelSoundCue = NULL;
    this->FailSoundCue = NULL;
    this->PassSoundCue = NULL;
    this->OptionPassSoundCue = NULL;
    this->OptionConfirmSoundCue = NULL;
    this->ConfirmCharactersCue = NULL;
    this->ChangeConferenceSoundCue = NULL;
    this->TimeEndingLobbyCue = NULL;
    this->OptionsChangeOptionCue = NULL;
    this->OptionsChangeValueCue = NULL;
    this->OptionsApplyCue = NULL;
    this->RepeatedCardSound = NULL;
    this->AddYourTeamSoundCue = NULL;
    this->RemoveYourTeamSoundCue = NULL;
    this->OpenChallengesSoundCue = NULL;
    this->OpenBioSoundCue = NULL;
    this->OpenCustomizeSoundCue = NULL;
    this->RerollDailySoundCue = NULL;
    this->ProgressDailyBarSoundCue = NULL;
    this->AlbumPageInSoundCue = NULL;
    this->AlbumPageOutSoundCue = NULL;
    this->GenericPopupInSoundCue = NULL;
    this->GenericPopupOutSoundCue = NULL;
    this->ActionKeyConfiguration = NULL;
}

