#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "SBGamePadConfiguration.h"
#include "SBPlayerInput.generated.h"

UCLASS(Blueprintable, NonTransient, Within=SBPlayerController)
class SABERGAME_API USBPlayerInput : public UPlayerInput {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBGamePadConfiguration> GamePadConfigurations;
    
public:
    USBPlayerInput();
};

