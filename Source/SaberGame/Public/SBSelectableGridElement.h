#pragma once
#include "CoreMinimal.h"
#include "SBMainMenuGridElement.h"
#include "SBSelectableGridElement.generated.h"

class USBSelectableGrid;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBSelectableGridElement : public USBMainMenuGridElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* SelectedWidget;
    
public:
    USBSelectableGridElement();
    UFUNCTION(BlueprintCallable)
    void SetSelected(bool _bIsSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetForceInvisible(bool bNewForceInvisible);
    
    UFUNCTION(BlueprintCallable)
    bool IsSelected();
    
    UFUNCTION(BlueprintCallable)
    USBSelectableGrid* GetSelectableGrid();
    
};

