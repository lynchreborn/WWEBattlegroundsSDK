#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "WriteLeaderboardRecordDelegate.h"
#include "NakamaClientWriteTournamentRecord.generated.h"

class UNakamaClient;
class UNakamaClientWriteTournamentRecord;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientWriteTournamentRecord : public UBlueprintAsyncActionBase {
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
    
    UNakamaClientWriteTournamentRecord();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientWriteTournamentRecord* WriteTournamentRecord(UNakamaClient* Client, UNakamaSession* Session, const FString& TournamentId, int64 Score, int64 SubScore, const FString& MetaData);
    
};

