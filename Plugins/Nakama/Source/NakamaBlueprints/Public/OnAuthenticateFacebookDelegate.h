#pragma once
#include "CoreMinimal.h"
#include "NakamaError.h"
#include "OnAuthenticateFacebookDelegate.generated.h"

class UNakamaSession;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAuthenticateFacebook, FNakamaError, Error, UNakamaSession*, Session);

