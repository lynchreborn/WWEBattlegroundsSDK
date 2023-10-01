#pragma once
#include "CoreMinimal.h"
#include "NakamaChannel.h"
#include "NakamaRtError.h"
#include "JoinChatDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FJoinChat, FNakamaRtError, Error, FNakamaChannel, Channel);

