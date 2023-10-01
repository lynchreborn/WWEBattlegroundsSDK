#pragma once
#include "CoreMinimal.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_ClimbHelicopter.generated.h"

class AWWEHelicopterEvent;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_ClimbHelicopter : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWEHelicopterEvent* HelicopterEvent;
    
public:
    UWWEAction_ClimbHelicopter();
};

