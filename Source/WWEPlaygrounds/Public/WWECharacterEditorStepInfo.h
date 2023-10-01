#pragma once
#include "CoreMinimal.h"
#include "ESBTextRestrictionReason.h"
#include "Types/SlateEnums.h"
#include "WWECharacterEditorStep.h"
#include "WWECharacterEditorStepInfo.generated.h"

class UImage;
class USBEditableTextBox;
class USBPlatformSlot;
class USBStylizedText;
class USoundCue;
class UWWECharacterEditorStepGrid;
class UWWEGridArrow;
class UWWEInfoAliasGrid;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWECharacterEditorStepInfo : public UWWECharacterEditorStep {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWECharacterEditorStepGrid* MainGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEInfoAliasGrid* AliasGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBEditableTextBox* EditableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* EditableNameBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* TitleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* TitleAlias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* BlackBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEGridArrow* UpArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEGridArrow* DownArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBPlatformSlot* FinishEditorCustomButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USoundCue* OnFailSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USoundCue* OnAcceptNameSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USoundCue* OnCancelSoundCue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bTextMaxLengthReached;
    
public:
    UWWECharacterEditorStepInfo();
protected:
    UFUNCTION(BlueprintCallable)
    void OnNameCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void OnNameChanged(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void OnArenaNameRestrictionApplied(ESBTextRestrictionReason Restriction);
    
};

