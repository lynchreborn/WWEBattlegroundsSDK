#pragma once
#include "CoreMinimal.h"
#include "NakamaError.h"
#include "OnRefreshSessionDelegate.generated.h"

class UNakamaSession;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRefreshSession, FNakamaError, Error, UNakamaSession*, Session);

