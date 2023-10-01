#pragma once
#include "CoreMinimal.h"
#include "NakamaMatchmakerMatched.h"
#include "OnReceivedMatchmakerMatchedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceivedMatchmakerMatched, const FNakamaMatchmakerMatched&, Match);

