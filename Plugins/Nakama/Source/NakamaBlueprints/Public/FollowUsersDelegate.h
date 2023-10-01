#pragma once
#include "CoreMinimal.h"
#include "NakamaRtError.h"
#include "NakamaStatus.h"
#include "FollowUsersDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFollowUsers, FNakamaRtError, Error, FNakamaStatus, Status);

