#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBUserWidget.h"
#include "SBBasicSlot.generated.h"

class UImage;
class UTextBlock;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBBasicSlot : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* InitialIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InitialText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* IconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextWidget;
    
public:
    USBBasicSlot();
    UFUNCTION(BlueprintCallable)
    void SetTextOpacityAndColor(const FLinearColor& InColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetText(const FText& NewText);
    
    UFUNCTION(BlueprintCallable)
    void SetOutlineOpacityAndColor(const FLinearColor& InColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetIcon(UTexture2D* NewIcon);
    
    UFUNCTION(BlueprintCallable)
    FLinearColor GetTextOpacityAndColor();
    
    UFUNCTION(BlueprintCallable)
    FText GetText();
    
    UFUNCTION(BlueprintCallable)
    FLinearColor GetOutlineOpacityAndColor();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetIcon();
    
};

