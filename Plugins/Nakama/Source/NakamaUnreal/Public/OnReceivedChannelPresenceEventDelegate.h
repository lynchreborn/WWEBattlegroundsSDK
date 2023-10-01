#pragma once
#include "CoreMinimal.h"
#include "NakamaChannelPresenceEvent.h"
#include "OnReceivedChannelPresenceEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceivedChannelPresenceEvent, const FNakamaChannelPresenceEvent&, ChannelPresenceEvent);

