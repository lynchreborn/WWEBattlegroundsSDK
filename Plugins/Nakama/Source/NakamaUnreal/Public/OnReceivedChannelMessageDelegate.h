#pragma once
#include "CoreMinimal.h"
#include "NakamaChannelMessage.h"
#include "OnReceivedChannelMessageDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceivedChannelMessage, const FNakamaChannelMessage&, ChannelMessage);

