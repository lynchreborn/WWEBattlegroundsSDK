#pragma once
#include "CoreMinimal.h"
#include "NakamaError.h"
#include "NakamaGroupUsersList.h"
#include "OnListListGroupUsersDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnListListGroupUsers, FNakamaError, Error, FNakamaGroupUsersList, GroupUsersList);

