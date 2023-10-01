#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "SBLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class SABERGAME_API USBLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    USBLocalPlayer();
};

