#pragma once
#include "CoreMinimal.h"
#include "NakamaChannelMessageAck.h"
#include "NakamaRtError.h"
#include "OnWriteChannelMessageDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWriteChannelMessage, FNakamaRtError, Error, FNakamaChannelMessageAck, MessageAck);

