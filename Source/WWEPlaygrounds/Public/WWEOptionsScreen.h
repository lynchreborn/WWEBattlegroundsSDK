#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBMessageBoxClosingReason.h"
#include "SBAlbumScreen.h"
#include "Types/SlateEnums.h"
#include "WWEOptionsScreen.generated.h"

class UImage;
class USBPlatformBar;
class USBStylizedText;
class USBUserWidget;
class UScrollBox;
class USoundCue;
class USpacer;
class UTextBlock;
class UUserWidget;
class UVerticalBox;
class UWWEOptionSelector;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEOptionsScreen : public USBAlbumScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEOptionSelector* OptionSelectorCrossplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEOptionSelector* OptionSelectorMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEOptionSelector* OptionSelectorAudioFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEOptionSelector* OptionSelectorVoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEOptionSelector* OptionSelectorInGameHelp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEOptionSelector* OptionSelectorResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* ResolutionSpacer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEOptionSelector* OptionSelectorScreenType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* ScreenTypeSpacer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEOptionSelector* OptionSelectorGraphics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* GraphicsSpacer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEOptionSelector* OptionSelectorControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEOptionSelector* OptionSelectorCredits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* OptionSelectorsVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* LeftPlatformBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* RightPlatformBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBUserWidget* MenuBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* PopupBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BuildNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox_Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ArrowUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ArrowDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* PlayerUniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USoundCue* OnApplySoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentWidgetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalWidgetCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InScreenWidgetCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FIntPoint> Resolutions;
    
public:
    UWWEOptionsScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void VoicesVolumeChanged();
    
    UFUNCTION(BlueprintCallable)
    void UpdateArrows(float CurrentOffset);
    
    UFUNCTION(BlueprintCallable)
    void TermsSelected();
    
    UFUNCTION(BlueprintCallable)
    void ShowTermsButton();
    
    UFUNCTION(BlueprintCallable)
    void ShowSelectButton();
    
    UFUNCTION(BlueprintCallable)
    void ShowApplyButton();
    
    UFUNCTION(BlueprintCallable)
    void SetSoundEnabled(bool bSoundEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetOptionsFocusEnabled(bool bOptionsFocusEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SelectorChanged();
    
    UFUNCTION(BlueprintCallable)
    void ScreenTypeChanged();
    
    UFUNCTION(BlueprintCallable)
    void ResolutionChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnEULAMsgBoxConfirmationClosed(ESBMessageBoxClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnDataProtectionMsgBoxConfirmationClosed(ESBMessageBoxClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnCreditsMsgBoxConfirmationClosed(ESBMessageBoxClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnControlsMsgBoxConfirmationClosed(ESBMessageBoxClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnBackMsgBoxConfirmationClosed(ESBMessageBoxClosingReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void MusicVolumeChanged();
    
    UFUNCTION(BlueprintCallable)
    void HideTermsButton();
    
    UFUNCTION(BlueprintCallable)
    void HideSelectButton();
    
    UFUNCTION(BlueprintCallable)
    void HideCreditsButton();
    
    UFUNCTION(BlueprintCallable)
    void HideApplyButton();
    
    UFUNCTION(BlueprintCallable)
    void GraphicsChanged();
    
    UFUNCTION(BlueprintCallable)
    UWidget* GetNextNavigableWidgetUp();
    
    UFUNCTION(BlueprintCallable)
    UWidget* GetNextNavigableWidgetDown();
    
    UFUNCTION(BlueprintCallable)
    UWidget* GetNextNavigableWidget(EUINavigation NavigationDirection);
    
    UFUNCTION(BlueprintCallable)
    void CreditsSelected();
    
    UFUNCTION(BlueprintCallable)
    void ControlsSelected();
    
    UFUNCTION(BlueprintCallable)
    void AudioFXVolumeChanged();
    
};

