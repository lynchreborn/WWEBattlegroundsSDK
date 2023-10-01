#pragma once
#include "CoreMinimal.h"
#include "NakamaMatchmakerTicket.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaMatchmakerTicket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TicketId;
    
    FNakamaMatchmakerTicket();
};

