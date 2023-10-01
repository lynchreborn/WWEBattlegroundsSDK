#pragma once
#include "CoreMinimal.h"
#include "NakamaTournamentRecordList.h"
#include "OnListTournamentRecordsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnListTournamentRecords, const FNakamaTournamentRecordList&, RecordsList);

