#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InputCoreTypes.h"
#include "Types/SlateEnums.h"
#include "ESBControllerType.h"
#include "ESBTextRestrictionReason.h"
#include "SBTextRestrictions.h"
#include "Templates/SubclassOf.h"
#include "SBDefaultContentUI.generated.h"

class USBActionKeyConfiguration;
class USBAnimationTemplateUserWidget;
class USBGameInstance;
class USoundCue;
class UTexture2D;
class UWidgetAnimation;

UCLASS(Blueprintable)
class SABERGAME_API USBDefaultContentUI : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AxisDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USBAnimationTemplateUserWidget>> WidgetAnimationTemplates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> WidgetAnimationStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Tips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FText> TipsStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* AcceptSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* CancelSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* FailSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PassSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OptionPassSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OptionConfirmSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ConfirmCharactersCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ChangeConferenceSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* TimeEndingLobbyCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OptionsChangeOptionCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OptionsChangeValueCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OptionsApplyCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* RepeatedCardSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* AddYourTeamSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* RemoveYourTeamSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OpenChallengesSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OpenBioSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OpenCustomizeSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* RerollDailySoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ProgressDailyBarSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* AlbumPageInSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* AlbumPageOutSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* GenericPopupInSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* GenericPopupOutSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBTextRestrictions> TextRestrictions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBTextRestrictionReason, FText> UnvalidRestrictionTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, EUINavigation> UMGNavigationExtraInput;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBActionKeyConfiguration* ActionKeyConfiguration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, uint32> CharacterRenderActionConfiguration;
    
public:
    USBDefaultContentUI();
    UFUNCTION(BlueprintCallable)
    void StoreAnimationsFromTemplate(USBAnimationTemplateUserWidget* widgetTemplate);
    
    UFUNCTION(BlueprintCallable)
    void InitTipsStorage();
    
    UFUNCTION(BlueprintCallable)
    void InitAnimationStorage();
    
    UFUNCTION(BlueprintCallable)
    UWidgetAnimation* GetWidgetAnimationByName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    FText GetRandomTip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetKeyNamesBindedToActionForControllerType(FName ActionName, ESBControllerType ControllerType, TArray<FName>& OutKeyNames) const;
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetControllerTypeKeyIcon(ESBControllerType ControllerType, const FName& KeyName, const FName& IconStyleName) const;
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetControllerTypeIcon(ESBControllerType ControllerType, const FName& IconStyleName) const;
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetControllerTypeCustomTexture(ESBControllerType ControllerType, const FString& _TextureName) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UTexture2D*> GetControllerTypeAlternativeActionsIcons(ESBControllerType ControllerType, const FName& ActionName, const FName& IconStyleName) const;
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetControllerTypeActionIcon(ESBControllerType ControllerType, const FName& ActionName, const FName& IconStyleName) const;
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetControllerIndexCustomTexture(int32 ControllerIndex, const FString& _TextureName, USBGameInstance* GameInstance) const;
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetControllerIndexActionIcon(int32 ControllerIndex, const FName& ActionName, const FName& IconStyleName, const USBGameInstance* GameInstance) const;
    
    UFUNCTION()
    bool GetCharacterRenderActionName(uint32 CharacterRenderActionID, FName& CharacterRenderActionName) const;
    
    UFUNCTION()
    bool GetCharacterRenderActionID(const FName& CharacterRenderActionName, uint32& CharacterRenderActionID) const;
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetActivePlayerCustomTexture(const FString& _TextureName, USBGameInstance* GameInstance) const;
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetActivePlayerActionIcon(const FName& ActionName, const FName& IconStyleName, const USBGameInstance* GameInstance) const;
    
};

