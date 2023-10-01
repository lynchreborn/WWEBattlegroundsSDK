#pragma once
#include "CoreMinimal.h"
#include "NakamaPartyJoinRequest.h"
#include "OnReceivedPartyJoinRequestDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceivedPartyJoinRequest, const FNakamaPartyJoinRequest&, PartyJoinRequest);

