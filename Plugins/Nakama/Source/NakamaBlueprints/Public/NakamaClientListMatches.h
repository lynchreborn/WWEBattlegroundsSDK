#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnListMatchesDelegate.h"
#include "NakamaClientListMatches.generated.h"

class UNakamaClient;
class UNakamaClientListMatches;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientListMatches : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaSession* UserSession;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnListMatches OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnListMatches OnError;
    
    UNakamaClientListMatches();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientListMatches* ListMatches(UNakamaClient* Client, UNakamaSession* Session, int32 MinSize, int32 MaxSize, int32 Limit, const FString& Label, bool Authoritative);
    
};

