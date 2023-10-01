#pragma once
#include "CoreMinimal.h"
#include "NakamaGroupList.h"
#include "OnGroupsListDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGroupsList, const FNakamaGroupList&, Groups);

