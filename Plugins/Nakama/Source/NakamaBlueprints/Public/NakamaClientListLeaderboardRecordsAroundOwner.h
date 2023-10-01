#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ListLeaderboardRecordsDelegate.h"
#include "NakamaClientListLeaderboardRecordsAroundOwner.generated.h"

class UNakamaClient;
class UNakamaClientListLeaderboardRecordsAroundOwner;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientListLeaderboardRecordsAroundOwner : public UBlueprintAsyncActionBase {
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
    
    UNakamaClientListLeaderboardRecordsAroundOwner();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientListLeaderboardRecordsAroundOwner* ListLeaderboardRecordsAroundOwner(UNakamaClient* Client, UNakamaSession* Session, const FString& LeaderboardId, const FString& OwnerId, int32 Limit);
    
};

