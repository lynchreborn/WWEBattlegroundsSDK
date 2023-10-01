#pragma once
#include "CoreMinimal.h"
#include "NakamaStatus.h"
#include "OnFollowUsersDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFollowUsers, const FNakamaStatus&, Status);

