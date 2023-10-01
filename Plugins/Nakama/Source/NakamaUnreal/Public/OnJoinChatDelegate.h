#pragma once
#include "CoreMinimal.h"
#include "NakamaChannel.h"
#include "OnJoinChatDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJoinChat, FNakamaChannel, Channel);

