#pragma once
#include "CoreMinimal.h"
#include "NakamaError.h"
#include "NakamaTournamentRecordList.h"
#include "ListTournamentRecordsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FListTournamentRecords, FNakamaError, Error, FNakamaTournamentRecordList, TournamentRecordList);

