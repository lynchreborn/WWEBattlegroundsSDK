#pragma once
#include "CoreMinimal.h"
#include "NakamaPartyMatchmakerTicket.h"
#include "OnAddMatchmakerPartyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAddMatchmakerParty, FNakamaPartyMatchmakerTicket, Ticket);

