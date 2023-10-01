#pragma once
#include "CoreMinimal.h"
#include "NakamaFriend.h"
#include "NakamaFriendList.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaFriendList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNakamaFriend> NakamaUsers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Cursor;
    
    FNakamaFriendList();
};

