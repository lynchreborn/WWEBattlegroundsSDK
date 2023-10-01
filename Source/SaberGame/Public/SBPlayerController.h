#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ESBPlatformType.h"
#include "Templates/SubclassOf.h"
#include "SBPlayerController.generated.h"

class UPlayerInput;

UCLASS(Blueprintable)
class SABERGAME_API ASBPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OptionsString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyPawnOnLeave;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPlayerInput> PlayerInputClass;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableForceFeedback;
    
public:
    ASBPlayerController();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPlatform(ESBPlatformType NewPlatform);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerConsoleCommand(const FString& Command);
    
};

