#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnAnyErrorDelegate.h"
#include "OnSuccessfulDelegate.h"
#include "NakamaClientRemoveFriends.generated.h"

class UNakamaClient;
class UNakamaClientRemoveFriends;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientRemoveFriends : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaSession* UserSession;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnyError OnError;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSuccessful OnSuccess;
    
    UNakamaClientRemoveFriends();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientRemoveFriends* RemoveFriends(UNakamaClient* Client, UNakamaSession* Session, TArray<FString> IDs, TArray<FString> Usernames);
    
};

