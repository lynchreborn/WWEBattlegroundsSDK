#pragma once
#include "CoreMinimal.h"
#include "NakamaError.h"
#include "NakamaGroup.h"
#include "CreateGroupDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCreateGroup, FNakamaError, Error, FNakamaGroup, Group);

