#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WWEAction_ComplexBase.h"
#include "WWEAction_GoAndRotateToApron.generated.h"

class AActor;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_GoAndRotateToApron : public UWWEAction_ComplexBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> CollisionActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    AActor* CollisionActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFromIrishWhip;
    
public:
    UWWEAction_GoAndRotateToApron();
};

