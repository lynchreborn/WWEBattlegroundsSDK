#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "SBPlayerCameraManager.generated.h"

class UWorld;

UCLASS(Blueprintable, NonTransient)
class SABERGAME_API ASBPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* OriginWorld;
    
public:
    ASBPlayerCameraManager();
};

