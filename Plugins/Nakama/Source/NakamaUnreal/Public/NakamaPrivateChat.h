#pragma once
#include "CoreMinimal.h"
#include "NakamaPrivateChat.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaPrivateChat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserIdOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserIdTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChannelId;
    
    FNakamaPrivateChat();
};

