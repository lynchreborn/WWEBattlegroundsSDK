#pragma once
#include "CoreMinimal.h"
#include "NakamaMatch.h"
#include "NakamaRtError.h"
#include "JoinMatchDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FJoinMatch, FNakamaRtError, Error, FNakamaMatch, Match);

