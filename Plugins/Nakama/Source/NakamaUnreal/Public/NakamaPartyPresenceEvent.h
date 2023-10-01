#pragma once
#include "CoreMinimal.h"
#include "NakamaUserPresence.h"
#include "NakamaPartyPresenceEvent.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaPartyPresenceEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PartyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNakamaUserPresence> Joins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNakamaUserPresence> Leaves;
    
    FNakamaPartyPresenceEvent();
};

