#pragma once
#include "CoreMinimal.h"
#include "NakamaPartyLeader.h"
#include "OnReceivedPartyLeaderDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceivedPartyLeader, const FNakamaPartyLeader&, PartyLeader);

