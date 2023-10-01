#pragma once
#include "CoreMinimal.h"
#include "NakamaLeaderboardRecord.h"
#include "OnWriteLeaderboardRecordDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWriteLeaderboardRecord, const FNakamaLeaderboardRecord&, Record);

