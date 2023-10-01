#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ENakamaGroupState.h"
#include "OnListListGroupUsersDelegate.h"
#include "NakamaClientListListGroupUsers.generated.h"

class UNakamaClient;
class UNakamaClientListListGroupUsers;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientListListGroupUsers : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaSession* UserSession;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnListListGroupUsers OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnListListGroupUsers OnError;
    
    UNakamaClientListListGroupUsers();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientListListGroupUsers* ListGroupUsers(UNakamaClient* Client, UNakamaSession* Session, const FString& GroupId, int32 Limit, ENakamaGroupState State, const FString& Cursor);
    
};

