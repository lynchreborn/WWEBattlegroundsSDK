#pragma once
#include "CoreMinimal.h"
#include "NakamaError.h"
#include "OnAuthenticateSteamDelegate.generated.h"

class UNakamaSession;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAuthenticateSteam, FNakamaError, Error, UNakamaSession*, Session);

