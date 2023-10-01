#pragma once
#include "CoreMinimal.h"
#include "NakamaRtError.h"
#include "OnRtErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRtError, const FNakamaRtError&, ErrorData);

