#pragma once
#include "CoreMinimal.h"
#include "NakamaError.h"
#include "NakamaGroupList.h"
#include "OnListGroupsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnListGroups, FNakamaError, Error, FNakamaGroupList, GroupList);

