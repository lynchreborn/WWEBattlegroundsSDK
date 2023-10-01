#pragma once
#include "CoreMinimal.h"
#include "NakamaChannelMessageAck.h"
#include "OnWriteChatMessageDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWriteChatMessage, FNakamaChannelMessageAck, ChannelMessage);

