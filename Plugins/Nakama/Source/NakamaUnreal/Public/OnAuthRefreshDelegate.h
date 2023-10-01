#pragma once
#include "CoreMinimal.h"
#include "OnAuthRefreshDelegate.generated.h"

class UNakamaSession;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAuthRefresh, const UNakamaSession*, Session);

