#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "Types/SlateEnums.h"
#include "WWECodesScreen.generated.h"

class UEditableTextBox;
class USBPlatformBar;
class USBRootUserWidget;
class USoundBase;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWECodesScreen : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* CodesTextInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBPlatformBar* RightPlatformBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* EnterSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SuccessExitSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ErrorExitSound;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USBRootUserWidget* RootParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UWidget* PreviousFocusedWidget;
    
public:
    UWWECodesScreen();
private:
    UFUNCTION(BlueprintCallable)
    void OnNameChanged(const FText& Text);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnHideScreen();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCodeComitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
};

