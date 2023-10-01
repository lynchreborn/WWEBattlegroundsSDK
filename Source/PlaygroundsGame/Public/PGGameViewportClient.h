#pragma once
#include "CoreMinimal.h"
#include "SBGameViewportClient.h"
#include "PGGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class PLAYGROUNDSGAME_API UPGGameViewportClient : public USBGameViewportClient {
    GENERATED_BODY()
public:
    UPGGameViewportClient();
};

