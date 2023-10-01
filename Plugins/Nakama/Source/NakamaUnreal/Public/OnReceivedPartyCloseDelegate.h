#pragma once
#include "CoreMinimal.h"
#include "NakamaPartyClose.h"
#include "OnReceivedPartyCloseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceivedPartyClose, const FNakamaPartyClose&, PartyClose);

