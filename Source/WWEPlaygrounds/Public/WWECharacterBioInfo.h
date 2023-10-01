#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "Templates/SubclassOf.h"
#include "WWECharacterBioInfo.generated.h"

class UPanelWidget;
class USBBasicSlot;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWECharacterBioInfo : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBBasicSlot> CharacterBioInfoSlotClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TitleTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* BodyPanel;
    
public:
    UWWECharacterBioInfo();
    UFUNCTION(BlueprintCallable)
    void SetData(const FText& Text, const bool bListItems);
    
};

