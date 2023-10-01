#pragma once
#include "CoreMinimal.h"
#include "EShopErrorResult.h"
#include "PGEditableArenaConfig.h"
#include "ESBMessageBoxClosingReason.h"
#include "ESBPopupSceneClosingReason.h"
#include "SBRootUserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "EWWEArenaSectionType.h"
#include "WWEArenaEditorScreen.generated.h"

class AWWEArenaEditorParticleManager;
class AWWEGameModeArenaEditor;
class UCanvasPanel;
class USBPlatformBar;
class UWWEArenaEditorHeightSelection;
class UWWEArenaEditorNameSelection;
class UWWEArenaEditorSelectionLayout;
class UWWEArenaEditorSubSectionGrid;
class UWWEArenaItemGrid;
class UWWEArenaItemGridElement;
class UWWEArenaItemParameters;
class UWWEGridArrow;
class UWWEUserInfoHeader;
class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEArenaEditorScreen : public USBRootUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* LeftPlatformBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* RightPlatformBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* FinishPlatformBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEArenaEditorSelectionLayout* SelectionLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEArenaItemGrid* ArenaItemGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEArenaItemGrid* ArenaWeaponGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEUserInfoHeader* CurrencyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEArenaEditorHeightSelection* HeightSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEArenaEditorSubSectionGrid* SubSectionGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* GridCanvasPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEArenaEditorNameSelection* ArenaNameSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float delayLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEGridArrow* UpArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEGridArrow* DownArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FPGEditableArenaConfig CurrentArenaConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FString CurrentSelectedArenaItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEArenaSectionType CurrentSelectedArenaSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UWWEArenaItemParameters*> CurrentArenaConfigParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEArenaItemParameters* ArenaItemLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bRevertingArenaItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInPreviewMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCameraInArenaSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWidget* PreviewWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEArenaItemGrid* CurrentArenaGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FinishButtonAnimationRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWEGameModeArenaEditor* GameMode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEArenaItemGridElement* CachedGridElementSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWEArenaEditorParticleManager* ParticleManagerCached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWidget* LastFocusedWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bSaveBeforeExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    ESlateVisibility PreviousUnlockVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCanBuyItem;
    
public:
    UWWEArenaEditorScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateShopArenaItems(bool EmptyCacheStore);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetArenaSection(EWWEArenaSectionType ArenaSectionArg);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RevertNextArenaSectionInOutfit();
    
    UFUNCTION(BlueprintCallable)
    void OnWantQuitEditorMsgClosed(ESBPopupSceneClosingReason Cause);
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialPopupClosed(ESBPopupSceneClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnPurchaseFinished(bool bSuccessful, EShopErrorResult ResultCode);
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmationWantQuitEditorMsgClosed(ESBMessageBoxClosingReason Cause);
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmationWantModifyNameAliasMsgClosed(ESBMessageBoxClosingReason Cause);
    
    UFUNCTION(BlueprintCallable)
    void OnClosedPurchase();
    
    UFUNCTION(BlueprintCallable)
    void OnBackendCatalogueUpdated(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void BackMessageBoxClosed(ESBMessageBoxClosingReason Cause);
    
};

