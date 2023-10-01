#pragma once
#include "CoreMinimal.h"
#include "NakamaMatchmakerTicket.h"
#include "NakamaRtError.h"
#include "AddMatchmakerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAddMatchmaker, FNakamaRtError, Error, FNakamaMatchmakerTicket, Ticket);

