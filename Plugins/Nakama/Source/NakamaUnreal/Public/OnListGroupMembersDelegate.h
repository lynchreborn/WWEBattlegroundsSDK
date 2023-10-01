#pragma once
#include "CoreMinimal.h"
#include "NakamaGroupUsersList.h"
#include "OnListGroupMembersDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnListGroupMembers, const FNakamaGroupUsersList&, members);

