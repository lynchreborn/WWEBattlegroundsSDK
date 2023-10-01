#include "SBMenuGrid.h"

void USBMenuGrid::SmartScrollToByNum(int32 column, int32 row, bool bInstantScroll) {
}

void USBMenuGrid::SetInitialColumnAndRow(int32 _Column, int32 _Row) {
}

void USBMenuGrid::SetFocusElement(int32 column, int32 row, bool bInstantScroll) {
}

void USBMenuGrid::SetExplicitNavigation() {
}

void USBMenuGrid::SetDefaultInitialScrollPosition(ESBMenuGridResetScrollType _DefaultInitialScrollPosition) {
}

void USBMenuGrid::ScrollToByOffset(float horizontalOffset, float verticalOffset, bool bInstantScroll) {
}

void USBMenuGrid::ScrollToByNum(int32 column, int32 row, bool bInstantScroll) {
}

void USBMenuGrid::ResetScroll(int32 column, int32 row, ESBMenuGridResetScrollType ScrollType) {
}

void USBMenuGrid::Refresh() {
}

bool USBMenuGrid::IsElementInsideScrollArea(int32 inColumn, int32 inRow, int32 currentColumn, int32 currentRow) {
    return false;
}

FIntPoint USBMenuGrid::GetTopElementIndex() {
    return FIntPoint{};
}

USBMenuGridElement* USBMenuGrid::GetTopElement() {
    return NULL;
}

FIntPoint USBMenuGrid::GetRightElementIndex() {
    return FIntPoint{};
}

USBMenuGridElement* USBMenuGrid::GetRightElement() {
    return NULL;
}

FIntPoint USBMenuGrid::GetNearestPositionFromOffset(float horizontalOffset, float verticalOffset) {
    return FIntPoint{};
}

FIntPoint USBMenuGrid::GetNearestPositionFromCurrentOffset() {
    return FIntPoint{};
}

FIntPoint USBMenuGrid::GetLeftElementIndex() {
    return FIntPoint{};
}

USBMenuGridElement* USBMenuGrid::GetLeftElement() {
    return NULL;
}

UWidget* USBMenuGrid::GetElementToFocus() {
    return NULL;
}

USBMenuGridElement* USBMenuGrid::GetCurrentFocus() const {
    return NULL;
}

FIntPoint USBMenuGrid::GetBottomElementIndex() {
    return FIntPoint{};
}

USBMenuGridElement* USBMenuGrid::GetBottomElement() {
    return NULL;
}

void USBMenuGrid::FullReorganizeElements() {
}

void USBMenuGrid::FillSingleRedirectedElement(int32 row, int32 column, int32 rowSpan, int32 colSpan) {
}

void USBMenuGrid::FillRedirectGrid() {
}

void USBMenuGrid::FastReorganizeElementsInit() {
}

void USBMenuGrid::FastReorganizeElements() {
}

void USBMenuGrid::EvaluateInitialScrollSetup(int32 NewInitialColumn, int32 NewInitialRow) {
}

void USBMenuGrid::EvaluateElementsExittingGrid(int32 inColumn, int32 inRow, ESBMenuGridElementExitSide inSide) {
}

void USBMenuGrid::Clear() {
}

USBMenuGrid::USBMenuGrid() {
    this->bConstructInEditor = false;
    this->bClearGrid = false;
    this->DefaultInitialScrollPosition = ESBMenuGridResetScrollType::Left;
    this->ScrollAnimCurve = NULL;
    this->LerpSpeed = 0.00f;
    this->ScrollModeJump = false;
    this->bInitializeInConstruct = true;
    this->ElementWidth = 0.00f;
    this->ElementHeight = 0.00f;
    this->NumOfElementsBeforeHorizontalScroll = 0;
    this->NumOfElementsBeforeVerticalScroll = 0;
    this->bDefaultNavigationAsStop = false;
    this->bDetectGridExitting = false;
    this->bLimitSizeToContent = false;
    this->Constructed = false;
    this->GridCanvas = NULL;
    this->HorizontalScrollBox = NULL;
    this->VerticalScrollBox = NULL;
    this->GridSizeBox = NULL;
    this->InternalCanvas = NULL;
    this->currentFocus = NULL;
    this->currentFocusColumn = 0;
    this->currentFocusRow = 0;
    this->lerpValue = 0.00f;
    this->scrolling = false;
    this->originalHorizontalOffset = 0.00f;
    this->originalVerticalOffset = 0.00f;
    this->targetHorizontalOffset = 0.00f;
    this->targetVerticalOffset = 0.00f;
    this->initialColumn = 0;
    this->initialRow = 0;
    this->ColumnCount = 0;
    this->RowCount = 0;
}

