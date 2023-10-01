#pragma once
#include "CoreMinimal.h"
#include "NakamaAccount.h"
#include "NakamaError.h"
#include "OnGetUserAccountDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGetUserAccount, FNakamaError, Error, FNakamaAccount, Account);

