#pragma once
#include "CoreMinimal.h"
#include "NakamaUserPresence.h"
#include "NakamaStatus.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNakamaUserPresence> Presences;
    
    FNakamaStatus();
};

