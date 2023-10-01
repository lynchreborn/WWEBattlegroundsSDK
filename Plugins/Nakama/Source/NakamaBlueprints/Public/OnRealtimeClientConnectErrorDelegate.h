#pragma once
#include "CoreMinimal.h"
#include "NakamaRtError.h"
#include "OnRealtimeClientConnectErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRealtimeClientConnectError, FNakamaRtError, Error);

