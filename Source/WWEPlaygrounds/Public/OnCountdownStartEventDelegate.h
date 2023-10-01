#pragma once
#include "CoreMinimal.h"
#include "OnCountdownStartEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCountdownStartEvent, int32, Time);

