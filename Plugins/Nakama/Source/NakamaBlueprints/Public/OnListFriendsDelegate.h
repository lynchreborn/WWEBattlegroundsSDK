#pragma once
#include "CoreMinimal.h"
#include "NakamaError.h"
#include "NakamaFriendList.h"
#include "OnListFriendsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnListFriends, FNakamaError, Error, FNakamaFriendList, FriendsList);

