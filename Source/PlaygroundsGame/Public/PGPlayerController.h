#pragma once
#include "CoreMinimal.h"
#include "SBPlayerController.h"
#include "PGPlayerController.generated.h"

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API APGPlayerController : public ASBPlayerController {
    GENERATED_BODY()
public:
    APGPlayerController();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetHumanOrderIndex(int32 NewHumanOrderIndex);
    
};

