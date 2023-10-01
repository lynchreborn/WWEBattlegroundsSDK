#pragma once
#include "CoreMinimal.h"
#include "NakamaRtError.h"
#include "LeaveChatDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLeaveChat, FNakamaRtError, Error, const FString&, ChannelId);

