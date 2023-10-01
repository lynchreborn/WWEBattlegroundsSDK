#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBThirdPersonCameraPosesComponent.generated.h"

class ASBCharacter;
class UCameraComponent;
class USBThirdPersonCameraPose;
class USpringArmComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SABERGAME_API USBThirdPersonCameraPosesComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, USBThirdPersonCameraPose*> ConfiguredPoses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USBThirdPersonCameraPose* CurrentTransitionPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USBThirdPersonCameraPose* TransitionOriginPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USBThirdPersonCameraPose* CachedTransitionStartCameraPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    ASBCharacter* OwnerCharacterRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UCameraComponent* CameraComponentRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USpringArmComponent* SpringArmComponentRef;
    
public:
    USBThirdPersonCameraPosesComponent();
};

