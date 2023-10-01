#pragma once
#include "CoreMinimal.h"
#include "NakamaPartyJoinRequest.h"
#include "OnListPartyJoinRequestsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnListPartyJoinRequests, FNakamaPartyJoinRequest, JoinRequest);

