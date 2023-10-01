#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBOnlineStateManager.generated.h"

class USBOnlineGameSession;

UCLASS(Blueprintable)
class SABERGAME_API USBOnlineStateManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBOnlineGameSession*> GameSessions;
    
public:
    USBOnlineStateManager();
};

