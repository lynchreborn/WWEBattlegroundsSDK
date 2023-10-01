#pragma once
#include "CoreMinimal.h"
#include "NakamaTournament.h"
#include "NakamaTournamentList.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaTournamentList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNakamaTournament> Tournaments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Cursor;
    
    FNakamaTournamentList();
};

