#pragma once
#include "CoreMinimal.h"
#include "ENakamaGroupState.h"
#include "NakamaUser.h"
#include "NakamaGroupUser.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaGroupUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNakamaUser User;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENakamaGroupState State;
    
    FNakamaGroupUser();
};

