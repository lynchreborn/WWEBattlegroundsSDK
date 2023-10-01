#pragma once
#include "CoreMinimal.h"
#include "NakamaPartyJoinRequest.h"
#include "NakamaRtError.h"
#include "ListPartyJoinRequestsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FListPartyJoinRequests, FNakamaRtError, Error, FNakamaPartyJoinRequest, PartyId);

