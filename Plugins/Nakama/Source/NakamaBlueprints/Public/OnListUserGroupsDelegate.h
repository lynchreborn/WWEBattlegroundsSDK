#pragma once
#include "CoreMinimal.h"
#include "NakamaError.h"
#include "NakamaUserGroupList.h"
#include "OnListUserGroupsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnListUserGroups, FNakamaError, Error, FNakamaUserGroupList, UserGroupList);

