#pragma once
#include "CoreMinimal.h"
#include "NakamaRtError.h"
#include "LeavePartyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLeaveParty, FNakamaRtError, Error, const FString&, PartyId);

