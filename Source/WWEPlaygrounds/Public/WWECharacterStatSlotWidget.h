#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "WWECharacterStatSlotWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWECharacterStatSlotWidget : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* StatNameBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ValueBlock;
    
public:
    UWWECharacterStatSlotWidget();
};

