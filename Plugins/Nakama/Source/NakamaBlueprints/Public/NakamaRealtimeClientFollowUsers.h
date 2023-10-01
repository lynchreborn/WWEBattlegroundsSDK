#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FollowUsersDelegate.h"
#include "NakamaRealtimeClientFollowUsers.generated.h"

class UNakamaRealtimeClient;
class UNakamaRealtimeClientFollowUsers;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaRealtimeClientFollowUsers : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFollowUsers OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFollowUsers OnError;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaRealtimeClient* RealtimeClient;
    
public:
    UNakamaRealtimeClientFollowUsers();
    UFUNCTION(BlueprintCallable)
    static UNakamaRealtimeClientFollowUsers* FollowUsers(UNakamaRealtimeClient* NewRealtimeClient, TArray<FString> UserIds);
    
};

