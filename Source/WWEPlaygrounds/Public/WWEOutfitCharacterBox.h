#pragma once
#include "CoreMinimal.h"
#include "WWECharacterBox.h"
#include "WWEOutfitCharacterBox.generated.h"

class UWidgetComponent;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEOutfitCharacterBox : public AWWECharacterBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* IsOutfitSelectedWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* CanAddNewOutfitWidget;
    
public:
    AWWEOutfitCharacterBox();
};

