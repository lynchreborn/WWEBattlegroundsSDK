#pragma once
#include "CoreMinimal.h"
#include "NakamaGroup.h"
#include "OnCreateGroupDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreateGroup, FNakamaGroup, Group);

