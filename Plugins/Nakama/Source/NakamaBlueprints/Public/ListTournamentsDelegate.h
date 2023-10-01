#pragma once
#include "CoreMinimal.h"
#include "NakamaError.h"
#include "NakamaTournamentList.h"
#include "ListTournamentsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FListTournaments, FNakamaError, Error, FNakamaTournamentList, TournamentList);

