#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ListTournamentRecordsDelegate.h"
#include "NakamaClientListTournamentRecordsAroundOwner.generated.h"

class UNakamaClient;
class UNakamaClientListTournamentRecordsAroundOwner;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientListTournamentRecordsAroundOwner : public UBlueprintAsyncActionBase {
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
    
    UNakamaClientListTournamentRecordsAroundOwner();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientListTournamentRecordsAroundOwner* ListTournamentRecordsAroundOwner(UNakamaClient* Client, UNakamaSession* Session, const FString& TournamentId, const FString& OwnerId, int32 Limit);
    
};

