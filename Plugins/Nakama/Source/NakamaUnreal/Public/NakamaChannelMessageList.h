#pragma once
#include "CoreMinimal.h"
#include "NakamaChannelMessage.h"
#include "NakamaChannelMessageList.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaChannelMessageList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNakamaChannelMessage> Messages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NextCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PrevCursor;
    
    FNakamaChannelMessageList();
};

