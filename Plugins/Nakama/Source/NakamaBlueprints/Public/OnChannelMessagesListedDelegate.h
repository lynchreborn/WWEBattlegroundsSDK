#pragma once
#include "CoreMinimal.h"
#include "NakamaChannelMessageList.h"
#include "NakamaError.h"
#include "OnChannelMessagesListedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChannelMessagesListed, FNakamaError, Error, FNakamaChannelMessageList, ChannelMessages);

