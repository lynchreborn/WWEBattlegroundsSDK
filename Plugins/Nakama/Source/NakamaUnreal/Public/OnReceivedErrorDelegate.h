#pragma once
#include "CoreMinimal.h"
#include "NakamaRtError.h"
#include "OnReceivedErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceivedError, const FNakamaRtError&, Error);

