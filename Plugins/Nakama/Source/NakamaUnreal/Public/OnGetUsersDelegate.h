#pragma once
#include "CoreMinimal.h"
#include "NakamaUser.h"
#include "OnGetUsersDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGetUsers, const TArray<FNakamaUser>&, Users);

