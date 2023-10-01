#pragma once
#include "CoreMinimal.h"
#include "NakamaLeaderboardRecordList.h"
#include "OnListLeaderboardRecordsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnListLeaderboardRecords, const FNakamaLeaderboardRecordList&, RecordsList);

