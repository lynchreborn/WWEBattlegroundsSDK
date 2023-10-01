#pragma once
#include "CoreMinimal.h"
#include "WWEAction_ComplexBase.h"
#include "WWEAction_GoAndUpTurnbuckle.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_GoAndUpTurnbuckle : public UWWEAction_ComplexBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceToGoToTurnbuckle;
    
public:
    UWWEAction_GoAndUpTurnbuckle();
};

