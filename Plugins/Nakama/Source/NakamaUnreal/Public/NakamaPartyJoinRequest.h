#pragma once
#include "CoreMinimal.h"
#include "NakamaUserPresence.h"
#include "NakamaPartyJoinRequest.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaPartyJoinRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PartyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNakamaUserPresence> Presences;
    
    FNakamaPartyJoinRequest();
};

