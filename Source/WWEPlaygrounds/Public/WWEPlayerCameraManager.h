#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "PGPlayerCameraManager.h"
#include "WWEPlayerCameraManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class WWEPLAYGROUNDS_API AWWEPlayerCameraManager : public APGPlayerCameraManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPostProcessSettings OldSettings;
    
public:
    AWWEPlayerCameraManager();
};

