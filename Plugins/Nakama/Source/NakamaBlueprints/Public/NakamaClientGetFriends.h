#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ENakamaFriendState.h"
#include "OnListFriendsDelegate.h"
#include "NakamaClientGetFriends.generated.h"

class UNakamaClient;
class UNakamaClientGetFriends;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientGetFriends : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaSession* UserSession;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnListFriends OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnListFriends OnError;
    
    UNakamaClientGetFriends();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientGetFriends* GetFriends(UNakamaClient* Client, UNakamaSession* Session, int32 Limit, ENakamaFriendState State, const FString& Cursor);
    
};

