#pragma once
#include "CoreMinimal.h"
#include "NakamaParty.h"
#include "OnCreatePartyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreateParty, FNakamaParty, Party);

