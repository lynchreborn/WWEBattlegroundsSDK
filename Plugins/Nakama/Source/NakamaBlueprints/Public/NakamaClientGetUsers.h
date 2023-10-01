#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GetUsersDelegate.h"
#include "NakamaClientGetUsers.generated.h"

class UNakamaClient;
class UNakamaClientGetUsers;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientGetUsers : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaSession* UserSession;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetUsers OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetUsers OnError;
    
    UNakamaClientGetUsers();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientGetUsers* GetUsers(UNakamaClient* Client, UNakamaSession* Session, TArray<FString> UserIds, TArray<FString> Usernames, TArray<FString> FacebookIds);
    
};

