#pragma once
#include "CoreMinimal.h"
#include "NakamaError.h"
#include "OnAuthenticateGameCenterDelegate.generated.h"

class UNakamaSession;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAuthenticateGameCenter, FNakamaError, Error, UNakamaSession*, Session);

