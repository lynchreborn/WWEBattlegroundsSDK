#pragma once
#include "CoreMinimal.h"
#include "NakamaPartyPresenceEvent.h"
#include "OnReceivedPartyPresenceDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceivedPartyPresence, const FNakamaPartyPresenceEvent&, Presences);

