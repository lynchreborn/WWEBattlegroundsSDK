#pragma once
#include "CoreMinimal.h"
#include "NakamaError.h"
#include "NakamaUserList.h"
#include "GetUsersDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGetUsers, FNakamaError, Error, FNakamaUserList, Users);

