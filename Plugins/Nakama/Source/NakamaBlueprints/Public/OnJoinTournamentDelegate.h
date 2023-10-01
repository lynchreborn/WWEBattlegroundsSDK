#pragma once
#include "CoreMinimal.h"
#include "NakamaError.h"
#include "OnJoinTournamentDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnJoinTournament, FNakamaError, Error, const FString&, TournamentId);

