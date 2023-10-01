#pragma once
#include "CoreMinimal.h"
#include "NakamaAccount.h"
#include "OnUserAccountInfoDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserAccountInfo, const FNakamaAccount&, AccountData);

