#pragma once
#include "CoreMinimal.h"
#include "SBAnimInstance.h"
#include "SBFacialAnimInstance.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, NonTransient)
class SABERGAME_API USBFacialAnimInstance : public USBAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MainSkeletalMeshComponent;
    
public:
    USBFacialAnimInstance();
};

