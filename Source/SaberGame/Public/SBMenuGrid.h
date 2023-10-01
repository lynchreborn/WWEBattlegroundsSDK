#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESBMenuGridElementExitSide.h"
#include "ESBMenuGridResetScrollType.h"
#include "SBMenuGridElementData.h"
#include "SBMenuGridMultiDimensionalArrayElementStruct.h"
#include "SBMenuGridRedirectElementMultidimensionalArry.h"
#include "SBUserWidget.h"
#include "SBMenuGrid.generated.h"

class UCanvasPanel;
class UCurveFloat;
class USBMenuGridElement;
class UScrollBox;
class USizeBox;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBMenuGrid : public USBUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSelectionChangedDelegate, int32, ColumnIdx, int32, RowIdx);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectionChangedDelegate OnSelectionChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConstructInEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBMenuGridResetScrollType DefaultInitialScrollPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ScrollAnimCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ScrollModeJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitializeInConstruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElementWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElementHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfElementsBeforeHorizontalScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfElementsBeforeVerticalScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultNavigationAsStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDetectGridExitting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLimitSizeToContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SizeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBMenuGridElementData> GridElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool Constructed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* GridCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* HorizontalScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* VerticalScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* GridSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* InternalCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBMenuGridElement* currentFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 currentFocusColumn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 currentFocusRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBMenuGridMultiDimensionalArrayElementStruct> GridElementWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBMenuGridRedirectElementMultidimensionalArry> RedirectGridElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float lerpValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool scrolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float originalHorizontalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float originalVerticalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float targetHorizontalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float targetVerticalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 initialColumn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 initialRow;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColumnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RowCount;
    
public:
    USBMenuGrid();
    UFUNCTION(BlueprintCallable)
    void SmartScrollToByNum(int32 column, int32 row, bool bInstantScroll);
    
    UFUNCTION(BlueprintCallable)
    void SetInitialColumnAndRow(int32 _Column, int32 _Row);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusElement(int32 column, int32 row, bool bInstantScroll);
    
    UFUNCTION(BlueprintCallable)
    void SetExplicitNavigation();
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultInitialScrollPosition(ESBMenuGridResetScrollType _DefaultInitialScrollPosition);
    
    UFUNCTION(BlueprintCallable)
    void ScrollToByOffset(float horizontalOffset, float verticalOffset, bool bInstantScroll);
    
    UFUNCTION(BlueprintCallable)
    void ScrollToByNum(int32 column, int32 row, bool bInstantScroll);
    
    UFUNCTION(BlueprintCallable)
    void ResetScroll(int32 column, int32 row, ESBMenuGridResetScrollType ScrollType);
    
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
    UFUNCTION(BlueprintCallable)
    bool IsElementInsideScrollArea(int32 inColumn, int32 inRow, int32 currentColumn, int32 currentRow);
    
    UFUNCTION(BlueprintCallable)
    FIntPoint GetTopElementIndex();
    
    UFUNCTION(BlueprintCallable)
    USBMenuGridElement* GetTopElement();
    
    UFUNCTION(BlueprintCallable)
    FIntPoint GetRightElementIndex();
    
    UFUNCTION(BlueprintCallable)
    USBMenuGridElement* GetRightElement();
    
    UFUNCTION(BlueprintCallable)
    FIntPoint GetNearestPositionFromOffset(float horizontalOffset, float verticalOffset);
    
    UFUNCTION(BlueprintCallable)
    FIntPoint GetNearestPositionFromCurrentOffset();
    
    UFUNCTION(BlueprintCallable)
    FIntPoint GetLeftElementIndex();
    
    UFUNCTION(BlueprintCallable)
    USBMenuGridElement* GetLeftElement();
    
    UFUNCTION(BlueprintCallable)
    UWidget* GetElementToFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBMenuGridElement* GetCurrentFocus() const;
    
    UFUNCTION(BlueprintCallable)
    FIntPoint GetBottomElementIndex();
    
    UFUNCTION(BlueprintCallable)
    USBMenuGridElement* GetBottomElement();
    
    UFUNCTION(BlueprintCallable)
    void FullReorganizeElements();
    
    UFUNCTION(BlueprintCallable)
    void FillSingleRedirectedElement(int32 row, int32 column, int32 rowSpan, int32 colSpan);
    
    UFUNCTION(BlueprintCallable)
    void FillRedirectGrid();
    
    UFUNCTION(BlueprintCallable)
    void FastReorganizeElementsInit();
    
    UFUNCTION(BlueprintCallable)
    void FastReorganizeElements();
    
    UFUNCTION(BlueprintCallable)
    void EvaluateInitialScrollSetup(int32 NewInitialColumn, int32 NewInitialRow);
    
    UFUNCTION(BlueprintCallable)
    void EvaluateElementsExittingGrid(int32 inColumn, int32 inRow, ESBMenuGridElementExitSide inSide);
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

