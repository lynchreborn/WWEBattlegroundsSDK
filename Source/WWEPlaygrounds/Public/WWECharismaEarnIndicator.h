#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "Templates/SubclassOf.h"
#include "WWECharismaEarnIndicator.generated.h"

class USBStylizedText;
class USBTextStyle;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWECharismaEarnIndicator : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* CharismaQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBTextStyle> PositiveTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBTextStyle> NegativeTextStyle;
    
public:
    UWWECharismaEarnIndicator();
};

