#pragma once
#include "CoreMinimal.h"
#include "NakamaError.h"
#include "OnAuthenticateEmailDelegate.generated.h"

class UNakamaSession;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAuthenticateEmail, FNakamaError, Error, UNakamaSession*, Session);

