#pragma once
#include "CoreMinimal.h"
#include "NakamaPartyMatchmakerTicket.h"
#include "NakamaRtError.h"
#include "AddMatchmakerPartyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAddMatchmakerParty, FNakamaRtError, Error, FNakamaPartyMatchmakerTicket, Ticket);

