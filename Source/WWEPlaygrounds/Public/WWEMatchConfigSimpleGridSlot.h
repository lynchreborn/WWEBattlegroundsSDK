#pragma once
#include "CoreMinimal.h"
#include "WWEGridSlot.h"
#include "WWEMatchConfigSimpleGridSlot.generated.h"

class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEMatchConfigSimpleGridSlot : public UWWEGridSlot {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TickSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* LabelTitle;
    
public:
    UWWEMatchConfigSimpleGridSlot();
};

