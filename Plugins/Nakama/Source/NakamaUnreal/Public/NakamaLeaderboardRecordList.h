#pragma once
#include "CoreMinimal.h"
#include "NakamaLeaderboardRecord.h"
#include "NakamaLeaderboardRecordList.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaLeaderboardRecordList {
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
    
    FNakamaLeaderboardRecordList();
};

