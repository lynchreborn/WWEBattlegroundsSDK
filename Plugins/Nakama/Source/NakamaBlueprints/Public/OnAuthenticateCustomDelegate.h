#pragma once
#include "CoreMinimal.h"
#include "NakamaError.h"
#include "OnAuthenticateCustomDelegate.generated.h"

class UNakamaSession;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAuthenticateCustom, FNakamaError, Error, UNakamaSession*, Session);

