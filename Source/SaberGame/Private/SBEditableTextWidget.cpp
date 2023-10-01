#include "SBEditableTextWidget.h"

void USBEditableTextWidget::OnTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void USBEditableTextWidget::OnTextChanged(const FText& Text) {
}

USBEditableTextWidget::USBEditableTextWidget() {
    this->ErrorAnimation = NULL;
    this->TitleText = NULL;
    this->ValidText = NULL;
    this->UnvalidText = NULL;
    this->LengthText = NULL;
    this->RightPlatformBar = NULL;
    this->LeftPlatformBar = NULL;
    this->EditionText = NULL;
    this->OnFailSoundCue = NULL;
    this->OnEnterTextSoundCue = NULL;
    this->OnCancelTextSoundCue = NULL;
    this->OnShowWidgetSoundCue = NULL;
    this->Instigator = NULL;
    this->InstigatorRoot = NULL;
    this->RestrictionReasonMask = ESBTextRestrictionReason::None;
    this->SoundManager = NULL;
}

