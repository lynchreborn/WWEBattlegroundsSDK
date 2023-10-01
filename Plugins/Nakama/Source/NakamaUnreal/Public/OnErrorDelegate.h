#pragma once
#include "CoreMinimal.h"
#include "NakamaError.h"
#include "OnErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnError, const FNakamaError&, ErrorData);

