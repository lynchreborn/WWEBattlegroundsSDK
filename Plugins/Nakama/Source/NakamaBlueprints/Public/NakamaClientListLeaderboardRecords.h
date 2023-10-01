#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ENakamaLeaderboardListBy.h"
#include "ListLeaderboardRecordsDelegate.h"
#include "NakamaClientListLeaderboardRecords.generated.h"

class UNakamaClient;
class UNakamaClientListLeaderboardRecords;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientListLeaderboardRecords : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaSession* UserSession;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FListLeaderboardRecords OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FListLeaderboardRecords OnError;
    
    UNakamaClientListLeaderboardRecords();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientListLeaderboardRecords* ListLeaderboardRecords(UNakamaClient* Client, UNakamaSession* Session, const FString& LeaderboardId, TArray<FString> OwnerIds, int32 Limit, const FString& Cursor, ENakamaLeaderboardListBy ListBy);
    
};

