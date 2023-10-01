#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "NakamaUserSession.h"
#include "NakamaSession.generated.h"

UCLASS(Blueprintable)
class NAKAMAUNREAL_API UNakamaSession : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNakamaUserSession SessionData;
    
    UNakamaSession();
    UFUNCTION(BlueprintCallable)
    void RestoreSession(const FString& Token, const FString& RefreshToken);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRefreshExpired(FDateTime Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExpired(FDateTime Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetVariable(const FString& Name);
    
};

