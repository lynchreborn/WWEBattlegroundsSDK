#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "SBGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class SABERGAME_API USBGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    USBGameViewportClient();
};

