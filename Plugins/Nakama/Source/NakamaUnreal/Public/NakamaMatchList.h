#pragma once
#include "CoreMinimal.h"
#include "NakamaMatch.h"
#include "NakamaMatchList.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaMatchList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNakamaMatch> Matches;
    
    FNakamaMatchList();
};

