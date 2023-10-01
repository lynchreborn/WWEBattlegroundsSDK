#pragma once
#include "CoreMinimal.h"
#include "ContentUploadData.h"
#include "EPGCharacterBody.h"
#include "EShopErrorResult.h"
#include "ESBMessageBoxClosingReason.h"
#include "ESBPopupSceneClosingReason.h"
#include "SBRootUserWidget.h"
#include "EWWEFightingStyle.h"
#include "EWWEGender.h"
#include "Templates/SubclassOf.h"
#include "WWECharacterEditorScreen.generated.h"

class APGCharacter;
class AWWECharacterEditorTV;
class AWWEPhotomaton;
class UImage;
class USBPlatformBar;
class USoundCue;
class UWWEBoxSpawnerEditor;
class UWWECharacterEditorCommonSlot;
class UWWECharacterSpawnerEditor;
class UWWERotateInputController;
class UWWESelectionLayout;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWECharacterEditorScreen : public USBRootUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bResetHeightValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHeadCanChangeSkinColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWWEGender GenderItemInPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWWEFightingStyle FightStyleItemInPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPGCharacterBody BodyItemInPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText NameItemInPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 AliasIDItemInPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HeightItemInPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString HeadItemInPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FString PortraitID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, float> MorphersMapInPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString SkinColorItemInPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString SkinAgeItemInPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString SkinBodyHairItemInPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> SkinAccesoriesItemsInPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> VanityItemsInPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> AnimationItemsInPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString FullBodyItemInPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString BoxItemInPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString BoxItemSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float AlternateCurrencyAnimationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float AlternateCurrencyAnimationTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWESelectionLayout* SelectionLayout;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWERotateInputController* RotateInputController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* LeftPlatformBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* RightPlatformBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWECharacterSpawnerEditor* CharacterSpawnerEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEBoxSpawnerEditor* BoxSpawnerEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CreateCustomBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APGCharacter> CharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USoundCue* OnFinishEditorSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> CachedSelectedVanityItems;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FString CurrentCharacterConfigurationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWECharacterEditorCommonSlot* CachedSlotPurchased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bUpdateShopAfterFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWEPhotomaton* PhotomatonCustomCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWECharacterEditorTV* CharacterEditorTV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bKeyBoardZoomDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bZoomInPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bZoomOutPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float KeyBoardZoomDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KeyBoardZoomSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bEditingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCharacterLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bBoxLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsNewCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bSaveBeforeExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWidget* LastFocusedWidget;
    
public:
    UWWECharacterEditorScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateShopVanityItems(bool EmptyCacheStore);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnWantQuitEditorMsgClosed(ESBPopupSceneClosingReason Cause);
    
    UFUNCTION(BlueprintCallable)
    void OnUploadContentComplete(bool bSuccess, const FContentUploadData& UploadContent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTutorialModifyPopupClosed(ESBPopupSceneClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialCreatePopupClosed(ESBPopupSceneClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnPurchaseFinished(bool bSuccessful, EShopErrorResult ResultCode);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnConfirmationWantQuitEditorMsgClosed(ESBMessageBoxClosingReason Cause);
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmationWantModifyNameAliasMsgClosed(ESBMessageBoxClosingReason Cause);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnClosedPurchase();
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterCreationErrorMsgBoxClosed();
    
    UFUNCTION(BlueprintCallable)
    void OnBackendCatalogueUpdated(bool bWasSuccessful);
    
public:
    UFUNCTION(BlueprintCallable)
    void MessageBoxClosingReasonOK();
    
    UFUNCTION(BlueprintCallable)
    void ExitToMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void ConfirmationWantModifyCharacterEditorMsg(ESBMessageBoxClosingReason Cause);
    
    UFUNCTION(BlueprintCallable)
    void ConfirmationWantBackEditorMsg(ESBMessageBoxClosingReason Cause);
    
    UFUNCTION(BlueprintCallable)
    void CapturePhotomatonAfterPrepareScene();
    
};

