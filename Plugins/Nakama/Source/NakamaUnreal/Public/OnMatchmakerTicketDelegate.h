#pragma once
#include "CoreMinimal.h"
#include "OnMatchmakerTicketDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMatchmakerTicket, const FString&, Ticket);

