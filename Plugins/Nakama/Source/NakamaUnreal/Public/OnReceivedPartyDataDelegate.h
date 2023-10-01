#pragma once
#include "CoreMinimal.h"
#include "NakamaPartyData.h"
#include "OnReceivedPartyDataDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceivedPartyData, const FNakamaPartyData&, PartyData);

