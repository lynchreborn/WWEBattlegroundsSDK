#pragma once
#include "CoreMinimal.h"
#include "WWECharacterBox.h"
#include "WWEWrestlersMainCharacterBox.generated.h"

class UWWEWrestlersMainGridSlot;
class UWidgetComponent;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEWrestlersMainCharacterBox : public AWWECharacterBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWWEWrestlersMainGridSlot* MyGridSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* NumOfOutfitsWidget;
    
public:
    AWWEWrestlersMainCharacterBox();
};

