#pragma once
#include "CoreMinimal.h"
#include "NakamaParty.h"
#include "OnReceivedPartyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceivedParty, const FNakamaParty&, Party);

