#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WWEGridSlot.h"
#include "WWEInnerOptionGridSlot.generated.h"

class USBTextStyle;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEInnerOptionGridSlot : public UWWEGridSlot {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* LabelOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBTextStyle> SelectedStyleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBTextStyle> UnselectedStyleText;
    
public:
    UWWEInnerOptionGridSlot();
};

