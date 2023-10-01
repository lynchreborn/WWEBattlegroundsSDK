#include "WWEScreenTitleWidget.h"

void UWWEScreenTitleWidget::SetTitleText(FText _TitleText, bool bRefresh) {
}

void UWWEScreenTitleWidget::SetTableId(const FString& TableId, bool bRefresh) {
}

void UWWEScreenTitleWidget::SetRightText(FText _Text) {
}

void UWWEScreenTitleWidget::SetLeftText(FText _Text) {
}

void UWWEScreenTitleWidget::SetKeyId(const FString& KeyId, bool bRefresh) {
}

UWWEScreenTitleWidget::UWWEScreenTitleWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->TitleTableId = TEXT("Loc_Menus");
    this->bShouldBeUppercase = false;
    this->LeftText = NULL;
    this->RightText = NULL;
}

