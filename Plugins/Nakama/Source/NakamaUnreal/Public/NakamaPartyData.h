#pragma once
#include "CoreMinimal.h"
#include "NakamaUserPresence.h"
#include "NakamaPartyData.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaPartyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PartyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNakamaUserPresence Presence;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 OpCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Data;
    
    FNakamaPartyData();
};

