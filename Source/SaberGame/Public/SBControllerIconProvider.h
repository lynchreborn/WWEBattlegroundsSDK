#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBControllerIconProvider.generated.h"

UCLASS(Abstract, Blueprintable)
class SABERGAME_API USBControllerIconProvider : public UDataAsset {
    GENERATED_BODY()
public:
    USBControllerIconProvider();
};

