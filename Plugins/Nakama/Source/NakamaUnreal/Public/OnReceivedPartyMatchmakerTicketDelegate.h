#pragma once
#include "CoreMinimal.h"
#include "NakamaPartyMatchmakerTicket.h"
#include "OnReceivedPartyMatchmakerTicketDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceivedPartyMatchmakerTicket, const FNakamaPartyMatchmakerTicket&, Ticket);

