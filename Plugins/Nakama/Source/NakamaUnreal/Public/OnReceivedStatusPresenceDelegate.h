#pragma once
#include "CoreMinimal.h"
#include "NakamaStatusPresenceEvent.h"
#include "OnReceivedStatusPresenceDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceivedStatusPresence, const FNakamaStatusPresenceEvent&, UserPresenceData);

