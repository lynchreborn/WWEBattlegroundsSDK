#pragma once
#include "CoreMinimal.h"
#include "NakamaChannelMessageList.h"
#include "OnListChannelMessagesDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnListChannelMessages, const FNakamaChannelMessageList&, MessageList);

