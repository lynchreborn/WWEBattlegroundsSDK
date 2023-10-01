#pragma once
#include "CoreMinimal.h"
#include "NakamaParty.h"
#include "NakamaRtError.h"
#include "CreatePartyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCreateParty, FNakamaRtError, Error, FNakamaParty, Party);

