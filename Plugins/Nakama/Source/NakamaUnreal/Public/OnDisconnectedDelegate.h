#pragma once
#include "CoreMinimal.h"
#include "NakamaDisconnectInfo.h"
#include "OnDisconnectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDisconnected, const FNakamaDisconnectInfo&, DisconnectInfo);

