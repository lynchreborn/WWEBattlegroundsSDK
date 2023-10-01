#pragma once
#include "CoreMinimal.h"
#include "NakamaMatchPresenceEvent.h"
#include "OnReceivedMatchPresenceCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceivedMatchPresenceCallback, const FNakamaMatchPresenceEvent&, PresenceEvent);

