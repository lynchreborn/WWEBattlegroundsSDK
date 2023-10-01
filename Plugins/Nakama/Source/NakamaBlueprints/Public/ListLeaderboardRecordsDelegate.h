#pragma once
#include "CoreMinimal.h"
#include "NakamaError.h"
#include "NakamaLeaderboardRecordList.h"
#include "ListLeaderboardRecordsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FListLeaderboardRecords, FNakamaError, Error, FNakamaLeaderboardRecordList, LeaderboardRecordList);

