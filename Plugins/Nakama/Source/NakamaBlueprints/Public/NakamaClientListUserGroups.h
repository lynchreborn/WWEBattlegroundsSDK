#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ENakamaGroupState.h"
#include "OnListUserGroupsDelegate.h"
#include "NakamaClientListUserGroups.generated.h"

class UNakamaClient;
class UNakamaClientListUserGroups;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientListUserGroups : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaSession* UserSession;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnListUserGroups OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnListUserGroups OnError;
    
    UNakamaClientListUserGroups();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientListUserGroups* ListUserGroups(UNakamaClient* Client, UNakamaSession* Session, const FString& UserID, int32 Limit, ENakamaGroupState State, const FString& Cursor);
    
};

