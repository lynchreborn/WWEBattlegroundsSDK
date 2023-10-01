#pragma once
#include "CoreMinimal.h"
#include "OnJoinPartyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJoinParty, const FString&, PartyId);

