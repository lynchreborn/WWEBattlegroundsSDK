#pragma once
#include "CoreMinimal.h"
#include "NakamaError.h"
#include "NakamaRPC.h"
#include "OnRPCResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRPCResponse, FNakamaError, Error, FNakamaRPC, RPCResponse);

