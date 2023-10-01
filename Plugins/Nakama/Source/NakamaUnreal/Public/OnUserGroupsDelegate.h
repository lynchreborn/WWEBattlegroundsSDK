#pragma once
#include "CoreMinimal.h"
#include "NakamaUserGroupList.h"
#include "OnUserGroupsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserGroups, const FNakamaUserGroupList&, UserGroups);

