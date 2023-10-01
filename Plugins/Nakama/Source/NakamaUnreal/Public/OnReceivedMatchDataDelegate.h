#pragma once
#include "CoreMinimal.h"
#include "NakamaMatchData.h"
#include "OnReceivedMatchDataDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceivedMatchData, const FNakamaMatchData&, MatchData);

