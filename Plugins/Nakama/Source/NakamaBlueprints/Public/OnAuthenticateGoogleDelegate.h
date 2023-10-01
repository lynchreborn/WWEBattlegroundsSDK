#pragma once
#include "CoreMinimal.h"
#include "NakamaError.h"
#include "OnAuthenticateGoogleDelegate.generated.h"

class UNakamaSession;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAuthenticateGoogle, FNakamaError, Error, UNakamaSession*, Session);

