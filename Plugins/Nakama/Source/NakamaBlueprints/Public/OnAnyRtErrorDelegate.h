#pragma once
#include "CoreMinimal.h"
#include "NakamaRtError.h"
#include "OnAnyRtErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAnyRtError, FNakamaRtError, Error);

