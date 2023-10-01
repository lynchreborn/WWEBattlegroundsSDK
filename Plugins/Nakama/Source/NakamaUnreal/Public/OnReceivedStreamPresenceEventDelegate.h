#pragma once
#include "CoreMinimal.h"
#include "NakamaStreamPresenceEvent.h"
#include "OnReceivedStreamPresenceEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceivedStreamPresenceEvent, const FNakamaStreamPresenceEvent&, StreamPresence);

