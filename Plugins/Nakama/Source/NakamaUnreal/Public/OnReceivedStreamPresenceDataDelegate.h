#pragma once
#include "CoreMinimal.h"
#include "NakamaStreamData.h"
#include "OnReceivedStreamPresenceDataDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceivedStreamPresenceData, const FNakamaStreamData&, StreamPresenceData);

