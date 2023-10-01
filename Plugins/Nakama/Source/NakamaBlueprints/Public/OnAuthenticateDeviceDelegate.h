#pragma once
#include "CoreMinimal.h"
#include "NakamaError.h"
#include "OnAuthenticateDeviceDelegate.generated.h"

class UNakamaSession;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAuthenticateDevice, FNakamaError, Error, UNakamaSession*, Session);

