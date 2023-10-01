#pragma once
#include "CoreMinimal.h"
#include "SBControllerIconProvider.h"
#include "SBControllerIconCollection.generated.h"

UCLASS(Abstract, Blueprintable)
class SABERGAME_API USBControllerIconCollection : public USBControllerIconProvider {
    GENERATED_BODY()
public:
    USBControllerIconCollection();
};

