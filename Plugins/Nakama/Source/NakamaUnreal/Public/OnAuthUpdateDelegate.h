#pragma once
#include "CoreMinimal.h"
#include "OnAuthUpdateDelegate.generated.h"

class UNakamaSession;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAuthUpdate, UNakamaSession*, LoginData);

