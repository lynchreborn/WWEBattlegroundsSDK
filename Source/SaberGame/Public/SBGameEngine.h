#pragma once
#include "CoreMinimal.h"
#include "Engine/GameEngine.h"
#include "SBGameEngine.generated.h"

UCLASS(Blueprintable, NonTransient)
class SABERGAME_API USBGameEngine : public UGameEngine {
    GENERATED_BODY()
public:
    USBGameEngine();
};

