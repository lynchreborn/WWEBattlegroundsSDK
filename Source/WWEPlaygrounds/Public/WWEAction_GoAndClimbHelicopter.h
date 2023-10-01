#pragma once
#include "CoreMinimal.h"
#include "WWEAction_ComplexBase.h"
#include "WWEAction_GoAndClimbHelicopter.generated.h"

class AWWEHelicopterEvent;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_GoAndClimbHelicopter : public UWWEAction_ComplexBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWEHelicopterEvent* HelicopterEvent;
    
public:
    UWWEAction_GoAndClimbHelicopter();
};

