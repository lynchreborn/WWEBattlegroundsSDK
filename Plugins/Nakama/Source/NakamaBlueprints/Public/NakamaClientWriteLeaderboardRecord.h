#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "WriteLeaderboardRecordDelegate.h"
#include "NakamaClientWriteLeaderboardRecord.generated.h"

class UNakamaClient;
class UNakamaClientWriteLeaderboardRecord;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientWriteLeaderboardRecord : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaSession* UserSession;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWriteLeaderboardRecord OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWriteLeaderboardRecord OnError;
    
    UNakamaClientWriteLeaderboardRecord();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientWriteLeaderboardRecord* WriteLeaderboardRecord(UNakamaClient* Client, UNakamaSession* Session, const FString& LeaderboardId, int64 Score, int64 SubScore, const FString& MetaData);
    
};

