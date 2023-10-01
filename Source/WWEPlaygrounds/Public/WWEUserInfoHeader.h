#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "WWEUserInfoHeader.generated.h"

class USBStylizedText;
class UWWEPrestigeSlot;
class UWWEUserInfoHeaderCurrencySlot;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEUserInfoHeader : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility UserNameVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility UserLevelVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility HardCurrencyVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility SoftCurrencyVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* username;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEPrestigeSlot* UserPrestige;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEUserInfoHeaderCurrencySlot* SoftCurrencySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWWEUserInfoHeaderCurrencySlot* HardCurrencySlot;
    
public:
    UWWEUserInfoHeader();
    UFUNCTION(BlueprintCallable)
    void UpdateUserInfo();
    
    UFUNCTION(BlueprintCallable)
    void UpdateCurrency();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAll();
    
};

