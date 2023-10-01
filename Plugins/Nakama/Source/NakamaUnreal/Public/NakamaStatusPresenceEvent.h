#pragma once
#include "CoreMinimal.h"
#include "NakamaUserPresence.h"
#include "NakamaStatusPresenceEvent.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaStatusPresenceEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNakamaUserPresence> Joins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNakamaUserPresence> Leaves;
    
    FNakamaStatusPresenceEvent();
};

