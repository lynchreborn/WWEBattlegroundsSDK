#pragma once
#include "CoreMinimal.h"
#include "NakamaUserPresence.h"
#include "NakamaPartyLeader.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaPartyLeader {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PartyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNakamaUserPresence Presence;
    
    FNakamaPartyLeader();
};

