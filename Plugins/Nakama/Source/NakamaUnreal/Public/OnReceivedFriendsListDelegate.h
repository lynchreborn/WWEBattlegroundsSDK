#pragma once
#include "CoreMinimal.h"
#include "NakamaFriendList.h"
#include "OnReceivedFriendsListDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceivedFriendsList, FNakamaFriendList, list);

