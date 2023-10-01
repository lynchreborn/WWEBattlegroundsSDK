#pragma once
#include "CoreMinimal.h"
#include "ENakamaChannelType.h"
#include "NakamaChatMessage.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaChatMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChatMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENakamaChannelType MessageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupName;
    
    FNakamaChatMessage();
};

