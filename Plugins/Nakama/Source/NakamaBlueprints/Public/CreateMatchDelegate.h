#pragma once
#include "CoreMinimal.h"
#include "NakamaMatch.h"
#include "NakamaRtError.h"
#include "CreateMatchDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCreateMatch, FNakamaRtError, Error, FNakamaMatch, Match);

