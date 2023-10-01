#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ENakamaLeaderboardListBy.h"
#include "ListTournamentRecordsDelegate.h"
#include "NakamaClientListTournamentRecords.generated.h"

class UNakamaClient;
class UNakamaClientListTournamentRecords;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientListTournamentRecords : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaSession* UserSession;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FListTournamentRecords OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FListTournamentRecords OnError;
    
    UNakamaClientListTournamentRecords();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientListTournamentRecords* ListTournamentRecords(UNakamaClient* Client, UNakamaSession* Session, const FString& TournamentId, TArray<FString> OwnerIds, int32 Limit, const FString& Cursor, ENakamaLeaderboardListBy ListBy);
    
};

