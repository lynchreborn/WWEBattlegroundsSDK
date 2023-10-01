#pragma once
#include "CoreMinimal.h"
#include "NakamaError.h"
#include "OnAuthRefreshErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAuthRefreshError, const FNakamaError&, ErrorData);

