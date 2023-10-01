#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnListGroupsDelegate.h"
#include "NakamaClientListGroups.generated.h"

class UNakamaClient;
class UNakamaClientListGroups;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientListGroups : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaSession* UserSession;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnListGroups OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnListGroups OnError;
    
    UNakamaClientListGroups();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientListGroups* ListGroups(UNakamaClient* Client, UNakamaSession* Session, const FString& GroupNameFilter, int32 Limit, const FString& Cursor);
    
};

