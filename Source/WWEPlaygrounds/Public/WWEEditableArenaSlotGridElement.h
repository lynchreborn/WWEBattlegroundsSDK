#pragma once
#include "CoreMinimal.h"
#include "ESBMessageBoxClosingReason.h"
#include "SBMainMenuGridElement.h"
#include "Templates/SubclassOf.h"
#include "WWEEditableArenaSlotGridElement.generated.h"

class ASBMaterialButtonsManager;
class UImage;
class UMaterialInstance;
class UMaterialInstanceDynamic;
class UTexture;
class UUserWidget;
class UWWEEditableArenaParallaxName;
class UWWEEditableArenaSelectionScreen;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEEditableArenaSlotGridElement : public USBMainMenuGridElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Selected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Unselected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> CreateTextWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEEditableArenaParallaxName> EditTextWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UTexture* TextTexture;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* MaterialEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* MaterialEmptySelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* MaterialDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* MaterialDefaultSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* MaterialSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* MaterialSlotSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 EditableArenaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWWEEditableArenaSelectionScreen* ScreenWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ButtonTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ButtonMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    ASBMaterialButtonsManager* ButtonsManager;
    
    UWWEEditableArenaSlotGridElement();
protected:
    UFUNCTION(BlueprintCallable)
    void ConfirmationMessageBoxClosed(ESBMessageBoxClosingReason Cause);
    
};

