#pragma once
#include "CoreMinimal.h"
#include "NakamaGroupUser.h"
#include "NakamaGroupUsersList.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaGroupUsersList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNakamaGroupUser> GroupUsers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Cursor;
    
    FNakamaGroupUsersList();
};

