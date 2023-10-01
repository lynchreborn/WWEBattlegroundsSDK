#pragma once
#include "CoreMinimal.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_JumpOffHelicopter.generated.h"

class AWWEHelicopterEvent;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_JumpOffHelicopter : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWEHelicopterEvent* HelicopterEvent;
    
public:
    UWWEAction_JumpOffHelicopter();
};

