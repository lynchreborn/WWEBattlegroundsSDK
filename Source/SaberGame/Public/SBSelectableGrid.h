#pragma once
#include "CoreMinimal.h"
#include "SBMenuGrid.h"
#include "SBSelectableGrid.generated.h"

class USBSelectableGridElement;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBSelectableGrid : public USBMenuGrid {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBSelectableGridElement*> SelectedGridElements;
    
public:
    USBSelectableGrid();
    UFUNCTION(BlueprintCallable)
    void UnSelect(USBSelectableGridElement* GridElement);
    
    UFUNCTION(BlueprintCallable)
    void Toggle(USBSelectableGridElement* GridElement);
    
    UFUNCTION(BlueprintCallable)
    void SetMultiSelectable(bool bNewMultiSelectable);
    
    UFUNCTION(BlueprintCallable)
    void Select(USBSelectableGridElement* GridElement);
    
    UFUNCTION(BlueprintCallable)
    bool IsSelected(USBSelectableGridElement* GridElement);
    
    UFUNCTION(BlueprintCallable)
    bool IsMultiSelectable();
    
    UFUNCTION(BlueprintCallable)
    void ClearSelected();
    
};

