#pragma once
#include "CoreMinimal.h"
#include "NakamaMatchList.h"
#include "OnMatchlistDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMatchlist, const FNakamaMatchList&, MatchList);

