#pragma once
#include "CoreMinimal.h"
#include "SBCamera.h"
#include "PGCameraGameplay.generated.h"

class USBSpringArmComponent;

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API APGCameraGameplay : public ASBCamera {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBSpringArmComponent* SpringArm;
    
public:
    APGCameraGameplay();
};

