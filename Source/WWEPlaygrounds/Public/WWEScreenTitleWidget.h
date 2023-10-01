#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WWEScreenTitleWidget.generated.h"

class USBStylizedText;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEScreenTitleWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TitleTableId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TitleKeyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeUppercase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* LeftText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* RightText;
    
public:
    UWWEScreenTitleWidget();
    UFUNCTION(BlueprintCallable)
    void SetTitleText(FText _TitleText, bool bRefresh);
    
    UFUNCTION(BlueprintCallable)
    void SetTableId(const FString& TableId, bool bRefresh);
    
    UFUNCTION(BlueprintCallable)
    void SetRightText(FText _Text);
    
    UFUNCTION(BlueprintCallable)
    void SetLeftText(FText _Text);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyId(const FString& KeyId, bool bRefresh);
    
};

