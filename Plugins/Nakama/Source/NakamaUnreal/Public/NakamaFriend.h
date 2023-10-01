#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ENakamaFriendState.h"
#include "NakamaUser.h"
#include "NakamaFriend.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaFriend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNakamaUser NakamaUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENakamaFriendState UserState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime UpdateTime;
    
    FNakamaFriend();
};

