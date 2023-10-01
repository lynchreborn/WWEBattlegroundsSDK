#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnJoinTournamentDelegate.h"
#include "NakamaClientJoinTournament.generated.h"

class UNakamaClient;
class UNakamaClientJoinTournament;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientJoinTournament : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaSession* UserSession;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoinTournament OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoinTournament OnError;
    
    UNakamaClientJoinTournament();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientJoinTournament* JoinTournament(UNakamaClient* Client, UNakamaSession* Session, const FString& TournamentId);
    
};

