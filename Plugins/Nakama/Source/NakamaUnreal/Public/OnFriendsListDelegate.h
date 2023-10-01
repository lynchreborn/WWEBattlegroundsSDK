#pragma once
#include "CoreMinimal.h"
#include "NakamaFriendList.h"
#include "OnFriendsListDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFriendsList, FNakamaFriendList, Friends);

