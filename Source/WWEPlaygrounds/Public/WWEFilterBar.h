#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWECharacterParameterFilter.h"
#include "WWEFilterBar.generated.h"

class UPanelWidget;
class UWWECharacterEditorPlatformIcon;
class UWWEFilterBarOptionButton;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEFilterBar : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FWWECharacterParameterFilter Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWWEFilterBarOptionButton*> FilterOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* FilterOptionsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWECharacterEditorPlatformIcon* PreviousTabButtonIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWECharacterEditorPlatformIcon* NextTabButtonIcon;
    
public:
    UWWEFilterBar();
};

