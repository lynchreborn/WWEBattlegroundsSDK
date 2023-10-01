#pragma once
#include "CoreMinimal.h"
#include "WWEAction_ComplexBase.h"
#include "WWEAction_GoAndTauntTurnbuckle.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_GoAndTauntTurnbuckle : public UWWEAction_ComplexBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceToGoToTurnbuckle;
    
public:
    UWWEAction_GoAndTauntTurnbuckle();
};

