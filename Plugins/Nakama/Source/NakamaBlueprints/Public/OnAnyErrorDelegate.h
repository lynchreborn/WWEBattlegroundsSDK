#pragma once
#include "CoreMinimal.h"
#include "NakamaError.h"
#include "OnAnyErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAnyError, FNakamaError, Error);

