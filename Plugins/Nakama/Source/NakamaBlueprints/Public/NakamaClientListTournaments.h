#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ListTournamentsDelegate.h"
#include "NakamaClientListTournaments.generated.h"

class UNakamaClient;
class UNakamaClientListTournaments;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientListTournaments : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaSession* UserSession;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FListTournaments OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FListTournaments OnError;
    
    UNakamaClientListTournaments();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientListTournaments* ListTournaments(UNakamaClient* Client, UNakamaSession* Session, int32 CategoryStart, int32 CategoryEnd, int32 StartTime, int32 EndTime, int32 Limit, const FString& Cursor);
    
};

