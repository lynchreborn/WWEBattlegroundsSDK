#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WWEInteractableMapItemInterface.h"
#include "WWERemoteAngryRam.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWERemoteAngryRam : public AActor, public IWWEInteractableMapItemInterface {
    GENERATED_BODY()
public:
    AWWERemoteAngryRam();
    
    // Fix for true pure virtual functions not being implemented
};

