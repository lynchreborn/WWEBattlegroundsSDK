#pragma once
#include "CoreMinimal.h"
#include "WWEWrestlersMainCharacterBox.h"
#include "WWECustomMainCharacterBox.generated.h"

class UWidgetComponent;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWECustomMainCharacterBox : public AWWEWrestlersMainCharacterBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* BuyNewCustomCharacterWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* CreateNewCustomCharacterWidget;
    
public:
    AWWECustomMainCharacterBox();
};

