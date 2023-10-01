#pragma once
#include "CoreMinimal.h"
#include "WWEAction_ComplexBase.h"
#include "WWEAction_GoAndPickupRemoteRam.generated.h"

class AWWEEventAngryRam;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_GoAndPickupRemoteRam : public UWWEAction_ComplexBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AWWEEventAngryRam* AngryRamEvent;
    
public:
    UWWEAction_GoAndPickupRemoteRam();
};

