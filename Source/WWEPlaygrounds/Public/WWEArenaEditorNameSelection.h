#pragma once
#include "CoreMinimal.h"
#include "ESBTextRestrictionReason.h"
#include "SBUserWidget.h"
#include "Types/SlateEnums.h"
#include "WWEArenaEditorNameSelection.generated.h"

class UCanvasPanel;
class USBEditableTextBox;
class USBStylizedText;
class USoundCue;
class UWWEArenaEditorScreen;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEArenaEditorNameSelection : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBEditableTextBox* EditableArenaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* EditableArenaNameCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* SelectArenaNameCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* ArenaNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* NumCharactersText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWWEArenaEditorScreen* ArenaEditorScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USoundCue* OnFailSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USoundCue* OnAcceptSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USoundCue* OnCancelSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FText NoNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bNameEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsOnProfanityFilterCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bTextMaxLengthReached;
    
public:
    UWWEArenaEditorNameSelection();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateFocus();
    
    UFUNCTION(BlueprintCallable)
    void OnArenaNameRestrictionApplied(ESBTextRestrictionReason Restriction);
    
    UFUNCTION(BlueprintCallable)
    void OnArenaNameCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void OnArenaNameChanged(const FText& Text);
    
};

