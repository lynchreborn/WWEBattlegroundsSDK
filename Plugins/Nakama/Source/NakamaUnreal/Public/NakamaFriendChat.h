#pragma once
#include "CoreMinimal.h"
#include "NakamaUser.h"
#include "NakamaFriendChat.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaFriendChat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNakamaUser NakamaUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChatId;
    
    FNakamaFriendChat();
};

