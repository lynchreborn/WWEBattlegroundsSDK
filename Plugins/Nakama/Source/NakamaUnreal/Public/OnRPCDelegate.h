#pragma once
#include "CoreMinimal.h"
#include "NakamaRPC.h"
#include "OnRPCDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRPC, const FNakamaRPC&, RPC);

