#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "SBBasicDescription.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBBasicDescription : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TitleBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DescriptionBlock;
    
public:
    USBBasicDescription();
    UFUNCTION(BlueprintCallable)
    void SetTitleText(const FText& NewText);
    
    UFUNCTION(BlueprintCallable)
    void SetTitleLocalizedText(const FString& TableId, const FString& KeyId);
    
    UFUNCTION(BlueprintCallable)
    void SetDescriptionText(const FText& NewText);
    
    UFUNCTION(BlueprintCallable)
    void SetDescriptionLocalizedText(const FString& TableId, const FString& KeyId);
    
};

