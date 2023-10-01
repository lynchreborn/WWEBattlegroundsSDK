#pragma once
#include "CoreMinimal.h"
#include "NakamaUserPresence.h"
#include "NakamaMatchData.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaMatchData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNakamaUserPresence Presence;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 OpCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Data;
    
    FNakamaMatchData();
};

