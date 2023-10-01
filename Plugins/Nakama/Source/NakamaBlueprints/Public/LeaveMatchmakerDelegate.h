#pragma once
#include "CoreMinimal.h"
#include "NakamaRtError.h"
#include "LeaveMatchmakerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLeaveMatchmaker, FNakamaRtError, Error, const FString&, Ticket);

