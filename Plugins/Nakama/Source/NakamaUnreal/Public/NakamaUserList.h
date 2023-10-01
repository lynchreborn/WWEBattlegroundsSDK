#pragma once
#include "CoreMinimal.h"
#include "NakamaUser.h"
#include "NakamaUserList.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaUserList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNakamaUser> Users;
    
    FNakamaUserList();
};

