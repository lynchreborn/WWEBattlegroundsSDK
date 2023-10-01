#pragma once
#include "CoreMinimal.h"
#include "NakamaStream.h"
#include "NakamaUserPresence.h"
#include "NakamaStreamPresenceEvent.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaStreamPresenceEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNakamaStream Stream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNakamaUserPresence> Joins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNakamaUserPresence> Leaves;
    
    FNakamaStreamPresenceEvent();
};

