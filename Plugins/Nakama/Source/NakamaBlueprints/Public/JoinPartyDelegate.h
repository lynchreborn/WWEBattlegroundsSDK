#pragma once
#include "CoreMinimal.h"
#include "NakamaRtError.h"
#include "JoinPartyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FJoinParty, FNakamaRtError, Error, const FString&, PartyId);

