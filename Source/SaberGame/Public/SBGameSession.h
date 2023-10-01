#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "SBGameSession.generated.h"

UCLASS(Blueprintable)
class SABERGAME_API ASBGameSession : public AGameSession {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRegister;
    
public:
    ASBGameSession();
};

