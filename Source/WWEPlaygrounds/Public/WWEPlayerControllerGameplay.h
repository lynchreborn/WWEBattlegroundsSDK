#pragma once
#include "CoreMinimal.h"
#include "PGPlayerControllerGameplay.h"
#include "WWEPlayerControllerGameplay.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API AWWEPlayerControllerGameplay : public APGPlayerControllerGameplay {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bControlledByGameLogic;
    
public:
    AWWEPlayerControllerGameplay();
};

