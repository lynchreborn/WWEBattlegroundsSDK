#pragma once
#include "CoreMinimal.h"
#include "OnRemovedMatchmakerTicketDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemovedMatchmakerTicket, const FString&, Ticket);

