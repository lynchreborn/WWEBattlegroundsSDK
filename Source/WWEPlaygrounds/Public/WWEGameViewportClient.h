#pragma once
#include "CoreMinimal.h"
#include "PGGameViewportClient.h"
#include "WWEGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class WWEPLAYGROUNDS_API UWWEGameViewportClient : public UPGGameViewportClient {
    GENERATED_BODY()
public:
    UWWEGameViewportClient();
};

