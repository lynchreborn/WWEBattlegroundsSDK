#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnAnyErrorDelegate.h"
#include "OnSuccessfulDelegate.h"
#include "NakamaClientDeleteLeaderboardRecord.generated.h"

class UNakamaClient;
class UNakamaClientDeleteLeaderboardRecord;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientDeleteLeaderboardRecord : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaSession* UserSession;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnyError OnError;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSuccessful OnSuccess;
    
    UNakamaClientDeleteLeaderboardRecord();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientDeleteLeaderboardRecord* DeleteLeaderboardRecord(UNakamaClient* Client, UNakamaSession* Session, const FString& LeaderboardId);
    
};

