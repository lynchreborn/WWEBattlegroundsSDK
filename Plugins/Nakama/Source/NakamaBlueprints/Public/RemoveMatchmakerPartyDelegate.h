#pragma once
#include "CoreMinimal.h"
#include "NakamaRtError.h"
#include "RemoveMatchmakerPartyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRemoveMatchmakerParty, FNakamaRtError, Error, const FString&, Ticket);

