#pragma once
#include "CoreMinimal.h"
#include "NakamaLeaderboardRecord.h"
#include "NakamaTournamentRecordList.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaTournamentRecordList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNakamaLeaderboardRecord> Records;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNakamaLeaderboardRecord> OwnerRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NextCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PrevCursor;
    
    FNakamaTournamentRecordList();
};

