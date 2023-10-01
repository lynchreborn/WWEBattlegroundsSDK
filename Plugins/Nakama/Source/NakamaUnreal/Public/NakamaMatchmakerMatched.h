#pragma once
#include "CoreMinimal.h"
#include "NakamaMatchmakerUser.h"
#include "NakamaMatchmakerMatched.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaMatchmakerMatched {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Ticket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Token;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNakamaMatchmakerUser> Users;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNakamaMatchmakerUser Me;
    
    FNakamaMatchmakerMatched();
};

