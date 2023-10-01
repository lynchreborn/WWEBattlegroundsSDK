#pragma once
#include "CoreMinimal.h"
#include "NakamaMatch.h"
#include "OnCreateMatchDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreateMatch, FNakamaMatch, Match);

