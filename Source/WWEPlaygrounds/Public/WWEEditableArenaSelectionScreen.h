#pragma once
#include "CoreMinimal.h"
#include "SBRootMenuGridWidget.h"
#include "WWEEditableArenaSelectionScreen.generated.h"

class USBIconGridElement;
class USBMenuGrid;
class USBPlatformBar;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEEditableArenaSelectionScreen : public USBRootMenuGridWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBMenuGrid* EditableArenaSlotSelectionGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* RightPlatformBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBIconGridElement*> SlotsArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPendingArenaBuild;
    
public:
    UWWEEditableArenaSelectionScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void DeleteItems();
    
    UFUNCTION(BlueprintCallable)
    void CreateItems();
    
};

