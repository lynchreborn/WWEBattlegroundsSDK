#pragma once
#include "CoreMinimal.h"
#include "SBGameMode.h"
#include "SBGameModeLobby.generated.h"

UCLASS(Blueprintable, NonTransient)
class SABERGAME_API ASBGameModeLobby : public ASBGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxServerWaitingTime;
    
public:
    ASBGameModeLobby();
};

