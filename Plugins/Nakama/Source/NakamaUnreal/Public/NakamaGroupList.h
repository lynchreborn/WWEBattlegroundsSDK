#pragma once
#include "CoreMinimal.h"
#include "NakamaGroup.h"
#include "NakamaGroupList.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaGroupList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNakamaGroup> Groups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Cursor;
    
    FNakamaGroupList();
};

