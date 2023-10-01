#pragma once
#include "CoreMinimal.h"
#include "SBRootUserWidget.h"
#include "WWEEulaScrollBox.generated.h"

class USBStylizedText;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEEulaScrollBox : public USBRootUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* TextBlock;
    
public:
    UWWEEulaScrollBox();
};

