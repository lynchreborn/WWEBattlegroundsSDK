#pragma once
#include "CoreMinimal.h"
#include "WWEGameModeGameplay.h"
#include "WWEGameModeCombat.generated.h"

UCLASS(Blueprintable, NonTransient)
class WWEPLAYGROUNDS_API AWWEGameModeCombat : public AWWEGameModeGameplay {
    GENERATED_BODY()
public:
    AWWEGameModeCombat();
    UFUNCTION(BlueprintCallable)
    void ResetGameplayFromBlueprint();
    
};

