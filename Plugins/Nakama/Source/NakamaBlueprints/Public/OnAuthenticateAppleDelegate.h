#pragma once
#include "CoreMinimal.h"
#include "NakamaError.h"
#include "OnAuthenticateAppleDelegate.generated.h"

class UNakamaSession;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAuthenticateApple, FNakamaError, Error, UNakamaSession*, Session);

