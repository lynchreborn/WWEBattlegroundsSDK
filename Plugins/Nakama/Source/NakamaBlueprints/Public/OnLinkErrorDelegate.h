#pragma once
#include "CoreMinimal.h"
#include "NakamaError.h"
#include "OnLinkErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLinkError, FNakamaError, Error);

