#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnAuthenticateDeviceDelegate.h"
#include "NakamaClientAuthenticateDevice.generated.h"

class UNakamaClient;
class UNakamaClientAuthenticateDevice;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientAuthenticateDevice : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAuthenticateDevice OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAuthenticateDevice OnError;
    
    UNakamaClientAuthenticateDevice();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientAuthenticateDevice* AuthenticateDevice(UNakamaClient* Client, const FString& DeviceID, const FString& username, bool CreateAccount, TMap<FString, FString> Vars);
    
};

